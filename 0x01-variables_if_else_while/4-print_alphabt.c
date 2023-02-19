#include <stdio.h>
/**
 * main - code to print the alphabet in lowercase,
 * followed by a new line, except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e'; &&letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
