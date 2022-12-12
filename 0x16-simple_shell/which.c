#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

int main(int ac, char **av, char **env)
{
	int i;
	char *var, *val, *path, *cmd;
	DIR *dirp;
	struct dirent *dir;

	if (ac != 2)
	{
		printf("Usage: %s <command>\n", av[0]);
		return (1);
	}
	cmd = av[1];

	for (i = 0; env[i] != NULL; i++)
	{
		var = strtok(env[i], "=");
		val = strtok(NULL, "");
		if (strcmp(var, "PATH") == 0)
		{
			path = strtok(val, ":");
			while (path != NULL)
			{
				dirp = opendir(path);
				if (dirp != NULL)
				{
					while (1)
					{
						errno = 0;
						dir = readdir(dirp);
						if (dir == NULL)
							break;
						if (strcmp(dir->d_name, cmd) == 0)
						{
							printf("%s/%s\n", path, cmd);
							return (0);
						}
					}
					closedir(dirp);
				}
				path = strtok(NULL, ":");

			}
			break;
		}
	}
	return (0);
}
