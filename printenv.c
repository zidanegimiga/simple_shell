#include "shell.h"

/**
  * _printenv - Prints all the environment variables
  *
  */

void _printenv(void)
{
	int i;

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
}
