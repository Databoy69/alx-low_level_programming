#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * Main - Entry
 *
 * Return: Always 0 (SUCCESS)
 */


int main(void)

{    
         int n;

         srand(time(0));
         n = rand() - RAND_MAX / 2;

1d = n % 10;
if (1d > 5)
{
	printf("Last digit of  %d is %d and greater than 5", n, 1d);
}
else if (1d ==0) 
{
	printf(Last digit of %d is %d and is 0", n, 1d);
}
else
{   	printf("Last digit of %d is %d and less than 6 and not 0\n", n, 1d);
} 
printf ("\n");

	 return (0);
}
