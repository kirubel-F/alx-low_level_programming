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
 	char j = '0';
	
	for ( i = '0' ; i <= '8'  ; i++ ){
	for (k = i +1 ; k <= '9' ; k++){
	for (j = k +1 ; j <= '9' ; j++){
      
        putchar(i);
        putchar(k);
        putchar(j);
        putchar(',');
        
        putchar(' ');
	}
    }
      
	}
return (0);
}
