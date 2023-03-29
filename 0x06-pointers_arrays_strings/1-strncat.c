#include "main.h"
/**
 * _strncat - To concatenate two strings
 * @dest: an input string
 * @src: Input atring
 * @n: an input integer
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && n > k)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
	return (dest);
}
