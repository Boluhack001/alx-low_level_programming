#include "main.h"

/**
 * print_rev - to print a string in reverse
 * @s: string to print in reverse
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
