#include "main.h"
/**
 * rev_string - to reverse a string
 * @s: String to reverse
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char a;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		a = s[i];
		s[i++] = s[len];
		s[len] = a;
	}
}
