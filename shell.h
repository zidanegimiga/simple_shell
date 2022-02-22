#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

/* Environ global variable */
extern char **environ;
/* Function Prototypes */
char *readline(void);
char **splitline(char *line);
int execute(char **args);
char *get_path(char *command);
char *_strcat(char *dest, char *src);
char **tokenize_env(char *path);
int _strcmp(char *s1, char *s2);
void sigint_handler(int sig);
int _putchar(char c);
char *_getenv(char *var);
void _printenv(void);
int _strlen(char *s);
int _strncmp(char *str1, char *str2, int n);


#endif /* SHELL_H */
