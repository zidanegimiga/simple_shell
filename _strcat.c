#include "shell.h"

/**
  * _strcat - Concatonates two strings passed to it
  * @dest: The destination string
  * @src: The string to be added
  *
  * Return: Pointer to the new string
  */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
		length++;

	for (j = 0; src[j] != '\0'; j++, length++)
		dest[length] = src[j];

	dest[length] = '\0';
	return (dest);
}
