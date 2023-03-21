#include "main.h"
/**
 * _isalpha - To determine if a given input is letter or not
 * @c: Hold the number
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 122 && c >= 90));
}
