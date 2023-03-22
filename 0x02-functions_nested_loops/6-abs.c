#include "main.h"
/**
 * _abs - Print absolute result
 * @a: Tp store input
 *
 * Return: Always 0 (Success)
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);

	else if (a >= 0)
		a = a;

	return (a);
}
