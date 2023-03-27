#include "main.h"
/**
 * _puts - To write a string to stdout
 * @str: string tp write
 *
 * Return: Void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
