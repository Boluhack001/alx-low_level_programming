#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: Pointer to string
 * @c: character to be found
 *
 * Return: pointer to first occurrence of the character
 * or null if character not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] = c ? (s + i) : '\0');
}
