#include "main.h"

/**
 * jack_bauer -> prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour  <= 23; hourr++)
	{
		for (minute = 0; minute <= 59; minute++)
		{

			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute %  0) + '0');
			_putchar(('\n');
		}
	}

}
