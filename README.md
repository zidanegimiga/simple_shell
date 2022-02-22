# SIMPLE SHELL BY ZIDANE GIMIGA & LAMECK NYAIRO                                                                  
                                                                                
* This shell is a command-line interpreter that provides a command line user interface for Unix-like operating systems.
                                                                                
* It is both an **interactive command language** and a **scripting language**, and is used by the operating system to control the execution of the system using shell scripts.
                                                                                
Users type commands which get executed within the session.                      
                                                                                
###### Example:                                                                 
~~~~                                                                            
$pwd - to print working directory                                               
$cd .. - to change direcory to previous directory                               
$echo - to print to standard output                                             
$cat - to read a file's content                                                 
                                                                                
~~~~  

### Contents
Below are the files in this repository and a description of the code they contain

#### main.c
> Contains the main code of the shell where all the rest of the other functions are used to make the shell run.
>
> Makes the Shell run continously and also listens for signals when a user presses `ctrl + c` 
>
> Returns `0` on success and `1` when something goes wrong as the shell runs

#### signal.c
> Contains a function that listens for when a user presses `ctrl + c` and prevents the shell session from closing.  
> 
> It prints a new line and clears the standard output instead of interrupting the running shell  
> 
> Prototype: `void sigint_handler(int sig)`

#### readline.c
> Contains the function `readline()` that gets the user input from standard input  
> 
> Prototype: `char *readline(void);`  
> 
> Returns:
> * The pointer to the string of input the user gave if successfull  
> * NULL if it fails        

#### splitline.c
> Contains the function `splitline(char *line)` that tokenises the user input and stores the resulting tokens in an array  
> 
> Prototype: `char **splitline(char *line)`  
> 
> Returns:
> * The array of tokens if succesful
> * NULL on failure

#### execute.c
> Contains the function `execute(char **args)` and it's where the actual linux commands are executed.
> 
> Prototype: `int execute(char **args);`
> 
> It also uses a few other functions.
> 
> Return:
> * `1` on success
> * `0` on failure

#### getpath.c
> Contains the function `get_path(char *command)` that gets the full path of given command from the `PATH` variable
> 
> Prototype: `char *get_path(char *command);`
> 
> Returns:
> * A pointer to the full path of the command on success
> * `NULL` on failure

#### `_getenv.c`
> Contains the function `_getenv(char *name)` that finds the environment variable requested by user
> 
> Prototype: `char *_getenv(char *var);`
> 
> Returns: 
> * The value of the environment variable on success
> * `NULL` on failure

#### tokenize_env.c
> Contains the function `tokenize_env(char *path)` that tokenizes the `PATH` to return a list of folders  
> 
> Prototype: `char **tokenize_env(char *path);`
> 
> Returns:
> * An array of directories on success
> * `NULL` on failure

### Custom Commands
Some custom commands for the shell

##### `_printenv.c`
> Contains the function `_printenv(void)` that pints all the environment variables  
> 
> Prototype: `void _printenv(void);`
> 
> It is called by typing the command `env` in the shell  

### Helper Functions
> These are some of the helper functions used across most of the core functions.  
> 
> Most of these are also availabe in the standard library but we were supposed to write the functions ourselves

#### `_putchar.c`
> Contains the functions `_putchar(char c)` that writes a character c to stdout  
> 
> Prototype: `int _putchar(char c);`
> 
> Return:
> * 1 on success
> * -1 on error

#### `_strcat.c`
> Contains the function `_strcat(char *dest, char *src)` that concatonates two strings passed to it  
> 
> Prototype: `char *_strcat(char *dest, char *src);`  
> 
> Returns:
> * A pointer to the new string

#### `_strcmp.c`
> Contains the function `_strcmp(char *s1, char *s2)` that compares two strings  
> 
> Prototype: `int _strcmp(char *s1, char *s2);`  
> 
> Returns: 
> * 0 if equal
> * negative value if less than
> * positive if greater than

#### `_strlen.c`
> Contains the function `_strlen(char *s)` that finds the length of string  
> 
> Prototype: `int _strlen(char *s);`
> 
> Returns:
> * Length of the string passed on success

#### `_strncmp.c`
> Contains the function `  _strncmp(char *str1, char *str2, int n)` that compares n bytes in str1 and str2
> 
> Prototype: `int _strncmp(char *str1, char *str2, int n);`  
> 
> Returns:
> * > 0 if str2 is less than str1
> * < 0 if str1 < str2,
> * 0 is str1 is equal to str2
 
### man file
#### man_1_simple_shell
This is the man file for the shell
> Usage: man ./man_1_simple_shell

### haeder file
#### shell.h
Contains all the function prototypes and header files used in this project.
