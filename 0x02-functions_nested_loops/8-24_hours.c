#include "main.h"

/**
 * jack_bauer - prints all minutes of the day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar( '0' + hour / 10);
			_putchar( '0' + hour % 10);
			_putchar(':');
			_putchar( '0' + minute / 10);
			_putchar( '0' + minute % 10);
			_putchar('\n');
		}
	}
}
