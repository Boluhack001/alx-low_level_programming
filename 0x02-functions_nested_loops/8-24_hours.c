#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: Functions print every minute in 1 day
 * Return: Void
 */

void jack_bauer(void)
{
	int Hour;
	int Minute;

	for (Hour = 0; Hour < 24; Hour++)
	{
		for (Minute = 0; Minute < 60; Minute++)
		{
			_putchar((Hour / 10) + '0');
			_putchar((Hour % 10) + '0');
			_putchar(':');
			_putchar((Minute / 10) + '0');
			_putchar((Minute / 10) + '0');
			_putchar('\n');
		}
	}
}
