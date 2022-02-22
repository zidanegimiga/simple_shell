#include "shell.h"

/**
  * sigint_handler -  Handles signal when user types ctrl + c
  * @signal: The signal
  *
  */

void sigint_handler(int signal)
{
	(void)signal;
	printf("\n");
	write(STDOUT_FILENO, "$ ", 2);
	fflush(stdout);
}
