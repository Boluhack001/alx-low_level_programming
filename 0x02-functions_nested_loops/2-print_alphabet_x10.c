#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char b = 'a';
	int count = 1;

	for (count = 1; count <= 10; count++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
			_putchar('\n');
		}
	}
