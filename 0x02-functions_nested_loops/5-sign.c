#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
		return (1);
}
else if (n = 0)
{
    	_putchar('0');
		return (0);
}
  else (n < 0)
   	_putchar('-');
    		return(-1);
}
