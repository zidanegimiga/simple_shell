#include "shell.h"

/**
  * _strcmp - A function to compare two strings
  * @s1: First string
  * @s2: Second string
  *
  * Return: 0 if equal, negative value if less than & positive if greater than
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0, ret;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}
	ret = s1[i] - s2[i];
	return (ret);
}
