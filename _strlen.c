#include "shell.h"

/**
 * _strlen - counts the no. of characters in a string
 *
 * str: string of characters to be counted
 * Return: The number of characters
 */
int _strlen(const char *str)
{
	int count = 0;
	int j = 0;

	while(str[j] != '\0')
	{
		j++;
		count++;
	}
	return  count;
}
