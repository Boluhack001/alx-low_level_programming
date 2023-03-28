#include "main.h"
/**
 * _strcpy - To copy string
 * @dest: a  pointer to destination of string
 * @src: pointer to souece string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
