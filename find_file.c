#include "main.h"
/**
  * find_file - finds file location in path variables
  * @command: user input
  * Return: modified user input
  */
char *find_file(char *command, int *lk)
{
	int i = 0, len;
	char *temp;
	struct stat st;

	if (!stat(command, &st))
		return (command);
	if (!path_var)
		return (NULL);
	while (path_var[i])
	{
		len = strlen(path_var[i]);
		temp = strdup(path_var[i]);
		temp = realloc(temp, len + strlen(command) + 2);
		temp[len] = '/', temp[len + 1] = '\0';
		temp = strcat(temp, command);
		if (!stat(temp, &st))
		{
			(*lk)++;
			errno = 0;
			return (temp);
		}
		i++;
		free(temp);
	}
	return (NULL);
}
