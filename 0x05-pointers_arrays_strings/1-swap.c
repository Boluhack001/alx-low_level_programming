#include "main.h"
/**
 * swap_int - To swap to varisbles
 * @a: First variable to swap
 * @b: Second variable to swap
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
