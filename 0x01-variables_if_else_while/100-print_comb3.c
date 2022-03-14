#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */
int main()
{
 	char i = '0';
 	char k = '1';
	
	for ( i = '0' ; i <= '8'  ; i++ ){
	for (k = i +1 ; k <= '9' ; k++){
      
        putchar(i);
        putchar(k);
        putchar(',');
        
        putchar(' ');
        
        }
	 }
return (0);
}
