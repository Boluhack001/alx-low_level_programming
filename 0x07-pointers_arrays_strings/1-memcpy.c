#include "main.h"
/**
 * _memcpy - copy n byte(s) from memory src to memory area dst
 * @dest: Pointer to destination
 * @src: Pointer to string source
 * @n: number of byte to be copied
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
