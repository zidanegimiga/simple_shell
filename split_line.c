#include "shell.h"
#define BUFSIZE 1024

/**
 * split_line - Splits a line passed to it into tokens
 *
 * @line: The string to be tokenized
 * Return: An array of tokens
 */
char **split_line(char *line)
{
	int bufsize = BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token, **tokens_backup;

	if (!tokens)
	{
		perror("hsh");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " ");
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= bufsize)
		{
			bufsize += BUFSIZE;
			tokens_backup = tokens;
			tokens = realloc(tokens, bufsize * sizeof(char *));
			if (!tokens)
			{
				free(tokens_backup);
				perror("hsh");
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, " ");
	}
	tokens[position] = NULL;
	return tokens;
}
