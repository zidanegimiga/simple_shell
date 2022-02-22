#include "shell.h"

/**
  * get_path - Gets the full path of a command given
  * @command: The command to find the full path for
  *
  * Return: The full path if succesful
  */

char *get_path(char *command)
{
	struct stat st;
	int i;
	char *path = _getenv("PATH");
	char **dirs = tokenize_env(path);
	char *cmd = command;
	char *fullpath = malloc(sizeof(char) * 1024);

	if (fullpath == NULL)
		return (NULL);

	for (i = 0; dirs[i]; i++)
	{
		fullpath[0] = 0;
		_strcat(fullpath, dirs[i]);
		_strcat(fullpath, "/");
		_strcat(fullpath, cmd);
		if (stat(fullpath, &st) == 0)
			return (fullpath);

	}
	free(fullpath);
	return (NULL);
}
