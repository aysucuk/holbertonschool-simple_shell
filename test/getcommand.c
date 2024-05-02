#include <errno.h>
#include "main.h"
/**
  * arg_counter - counts number of arguments
  * @buf: user input
  * @size: size of user input
  * Return: number of argumnets
  */
int arg_counter(char *buf, int size)
{
	int count = 0, i;

	for (i = 1; i < size; i++)
		count += ((buf[i - 1] == ' ' &&
					buf[i] != ' ') ||
				(i == 1 &&
				 buf[i - 1] != ' '));
	return (count);
}
/**
  * get_command - format command line arguments
  * Return: memory address where arguments are stored
  */
char **get_command(void)
{
	char **array, *buf;
	size_t n = 0, k, i, l = 0;

	k = getline(&buf, &n, stdin);
	if (k == (size_t)(-1))
	{
		if (errno == 0)
			return (NULL);
		perror("Failure to read line");
		return (NULL);
	}
	array = malloc(sizeof(char *) * (arg_counter(buf, k) + 1));
	for (i = 1; i < k; i++)
	{
		if (((buf[i - 1] == ' ' ||
						buf[i - 1] == '\0') &&
					buf[i] != ' ') ||
				(i == 1 && buf[i - 1] != ' '))
		{
			if (buf[i - 1] == ' ' || buf[i - 1] == '\0')
				array[l] = buf + i;
			else
				array[l] = buf + i - 1;
			while (buf[i] != ' ' && i < k && buf[i] != '\n')
				i++;
			buf[i] = '\0';
			l++;
		}
	}
	array[l] = NULL;
	return (array);
}
