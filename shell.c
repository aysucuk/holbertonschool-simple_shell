#include "main.h"
#include <errno.h>

/**
 * main - shell start function
 * @argc: argument counter
 * @argv: argument variables
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char *command;
	char **fcommand = malloc(sizeof(char *) * 2);
	size_t n = 0;
	size_t k;
	pid_t pid;
	struct stat st;

	while (1)
	{
		printf("#cisfun$ ");
		k = getline(&command, &n, stdin);
		if (k == (size_t)(-1))
		{
			perror("Failure to read line");
			break;
		}
		command[k] = '\0';
		if (stat(command, &st) == -1)
		{
			printf("%s\n", command);
			perror(argv[0]);
			continue;
		}
		pid = fork();
		if (pid == 0)
		{
			fcommand = (char *[]) {command, NULL};
			execve(command, fcommand, NULL);
		}
		else
			wait(NULL);
	}
	return (0);
}

