#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: 0
 */

void print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
