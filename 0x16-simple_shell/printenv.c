#include <stdio.h>
#include <string.h>

int main(int ac, char **av, char **env)
{
	int i;
	char *var, *val;

	(void)ac;
	(void)av;

	for (i = 0; env[i] != NULL; i++)
	{
		var = strtok(env[i], "=");
		val = strtok(NULL, "");
		printf("%s: %s\n", var, val);
	}
	return (0);
}
