#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - To print sum of diagonal square
 * @a: input square array
 * @size: size of one dimensuon in array
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumDiag1  = sumDiag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[i];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
