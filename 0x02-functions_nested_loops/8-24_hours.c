#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: nothing.
 */

void jack_bauer(void)
{
	 int hours, minutes;
    
    for (hours = 0; hours < 24; hours++)
    {
        for (minutes = 0; minutes < 60; minutes++)
        {
            _putchar("%02d:%02d\n", hours, minutes);
        }
    }
    
    return 0;
}
