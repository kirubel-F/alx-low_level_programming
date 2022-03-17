#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void more_numbers(void)
{
	int c;
	int i;
  
  	for (c = 0;c < 11;c++)
  	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		
		_putchar('\n');
	}
}
