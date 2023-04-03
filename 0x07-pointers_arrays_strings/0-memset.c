#include "main.h"
/**
 * _memset - fills memory wutb a constant bytes
 * @s: Pointer to memory ara
 * @b: Constant to fill memory with
 * @n: bytes of the memory area to be filled
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
