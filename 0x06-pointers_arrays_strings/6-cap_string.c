#include "main.h"
/**
 * cap_string - Capitalize all word of a string
 * @s: input string to capitalze
 *
 * Return: pointer to s
 */
char *cap_string(char *)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if (check_separators(s[i] && s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

		return (0);
	}
