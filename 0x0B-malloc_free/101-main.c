#include "main.h"

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
		printf("%s\n", tab[i]);
}


int main(void)
{
	char **tab;

	tab = strtow("            ");
	if (tab == NULL)
	{
		puts("Failed");
		return (1);
	}
	print_tab(tab);
	return (0);
}
