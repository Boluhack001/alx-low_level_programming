#include "main.h"
/**
 * reverse_array - Function to reverse an array
 * @a: Array
 * @n: Array length
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
