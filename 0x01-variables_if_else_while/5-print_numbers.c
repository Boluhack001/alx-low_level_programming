#include <stdio.h>
/**
 * main - code to print numbers in base 10
 * starting from 0 and followed by a new line
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
