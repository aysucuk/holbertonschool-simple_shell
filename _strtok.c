#include "main.h"
/**
  * _strtok - my strtok implementation
  * @str: string for tokenization
  * @delim: delimiter
  * Return: array of tokens
  */
char **_strtok(char *str, char delim)
{
	char **array, *start, *end;
	int i = 0, j;  f;

	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] != delim)
		{
			start = str + i;
			while (str[i] != delim && str[i])
				i++;
			if (j == 1)
				array = malloc(sizeof(char *) * j), f++;
			else
				array = realloc(array, sizeof(char *) * j);
			if (str[i] == NULL)
			{
				array[j - 1] = strdup(start);
				j++;
				break;
			}
			else
			{
				end = str + i;
				*end = '\0';
				array[j - 1] = strdup(start), *end = delim, start = end;
			}
			j++;
		}
		i++;
	}
	if (f == 0)
		array = malloc(sizeof(char *));
	else
		array = realloc(array, sizeof(char *) * j);
	array[j - 1] = NULL;
	return (NULL);
}
