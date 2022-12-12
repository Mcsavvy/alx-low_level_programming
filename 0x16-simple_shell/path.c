#include <stdio.h>
#include <string.h>

int main(int ac, char **av, char **env)
{
	int i;
	char *var, *val, *path;

	(void)ac;
	(void)av;

	for (i = 0; env[i] != NULL; i++)
	{
		var = strtok(env[i], "=");
		val = strtok(NULL, "");
		if (strcmp(var, "PATH") == 0)
		{

			path = strtok(val, ":");
			while (path != NULL)
			{
				printf("%s\n", path);
				path = strtok(NULL, ":");
			}
			break;
		}
	}
	return (0);
}
