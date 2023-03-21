#include "main.h"
/**
 * jack_bauer - Calculates every minute of the day
 *
 * Decription: Prints every minute of Jack Bauer starting from
 * 00:00 to 23:59
 * Return: Returns void
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
