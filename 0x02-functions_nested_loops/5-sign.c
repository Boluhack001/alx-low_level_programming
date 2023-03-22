#include "main.h"
/**
 * print_sign - Entry point
 * @n: An input number
 *
 * Return: 1 if number is poditive, 0 if number is 0
 * and -1 if number is negstive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
	}
}
