#include "main.h"
/**
 * _isalpha - To determine if a given input is letter or not
 * @c: Hold the number
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
