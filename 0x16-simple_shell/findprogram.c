#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


char *findenv(char *env[], char *name)
{
	char *key, *val, *var;
	int i;

	for (i = 0; env[i]; i++)
	{
		var = strdup(env[i]);
		key = strtok(var, "=");
		if (!strcmp(key, name))
		{
			val = strtok(NULL, "");
			free(var);
			return (strdup(val));
		}
		free(var);
	}
	return (NULL);
}

/**
 * findcmd - this function searches through $PATH to find a command
 * @command: name of the command
 * Return: a pointer to the path of the command if found, otherwise NULL
 */
char *findcmd(const char *command, char *PATH)
{
	char *path, *PATHCPY;
	DIR *dir;
	struct dirent *node;
	char *cmd;
	size_t len_path, len_name;

	cmd = NULL;
	PATHCPY = strdup(PATH);
	path = strtok(PATHCPY, ":");

	while (path)
	{
		dir = opendir(path);
		if (!dir)
		{
			path = strtok(NULL, ":");
			continue;
		}
		errno = 0;
		node = readdir(dir);
		while (node)
		{
			if (!strcmp(node->d_name, command))
			{
				len_path = strlen(path);
				len_name = strlen(node->d_name);
				cmd = realloc(strdup(path), len_path + len_name);
				cmd[len_path++] = '/';
				strcpy(cmd + len_path, node->d_name);
				cmd[len_path + len_name] = '\0';
				break;
			}
			errno = 0;
			node = readdir(dir);
		}
		if (errno != 0)
			break;
		closedir(dir);
		if (cmd)
			break;
		path = strtok(NULL, ":");
	}
	free(PATHCPY);
	return (cmd);
}

/**
 * main - entry point
 * Description: print out absolute path of commands
 *
 * @ac: argument count
 * @av: argument variables
 *
 * Return: an integer
 */
int main(int ac, char *av[], char *ev[])
{
	int i, status = 0;
	char *cmd, *PATH;

	PATH = findenv(ev, "PATH");
	if (!PATH)
		return (1);
	for (i = 1; i < ac; i++)
	{
		cmd = findcmd(av[i], PATH);
		if (!cmd)
		{
			status = 1;
			printf("%s not found\n", av[i]);
			continue;
		}
		printf("%s\n", cmd);
		free(cmd);
		cmd = NULL;
	}
	free(PATH);
	return (status);
}
