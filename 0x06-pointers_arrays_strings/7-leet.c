#include "main.h"
/**
 * leet - Entry point
 * @s: string input
 *
 * *Return: pointer to s
 */
char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetter[] = 'aAeElLoOtT';
	char leetNumber[] = '4433110077';

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetter[leetCount] == s[stringCount])
			{
				s[stringCount] == leetNumber[leetCount];
			}
		leetCount++;
	}
		stringCount;
}
return (0);
}

