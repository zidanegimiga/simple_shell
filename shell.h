#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <wait.h>
#include <unistd.h>

/* Function Prototypes */
char *read_line(void);
char **split_line(char *line);
void loop(void);
int execute(char **args);
int _strlen(const char *str);


#endif /* SHELL_H */
