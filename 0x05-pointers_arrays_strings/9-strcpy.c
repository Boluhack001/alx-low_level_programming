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
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}

