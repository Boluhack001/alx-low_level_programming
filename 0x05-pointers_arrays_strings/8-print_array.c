#include "main.h"
#include <stdio.h>
/**
 * print_array - A function to prin n elemenrs of an array of integer
 * @a: an input array
 * @n: an input integer
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
