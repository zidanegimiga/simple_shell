#include  "shell.h"

/**
  * readline - Reads the user input from standard input
  *
  * Return: The line that was read if succesful and NULL if it failed
  */

char *readline(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	int len = 0;

	len = getline(&line, &bufsize, stdin);
	if (len == -1)
	{
		free(line);
		return (NULL);
	}
	if (line[len - 1] == '\n')
		line[len - 1] = '\0';

	return (line);
}
