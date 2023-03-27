#include "main.h"

/**
 * _strlen - to calculate the length of a string
 * @s: length of string to be calculated
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
