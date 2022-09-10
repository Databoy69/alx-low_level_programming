<<<<<<< HEAD
=======
#include <stdlib.h>
include <stdio.h>
#include <time.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{

        int n;



<<<<<<< HEAD
        srand(time(0));

        n = rand() - RAND_MAX / 2;

        if (n > 0)
        {
                        printf("%d is positive",n);
        }
        else if (n==0)
        {
                        printf("%d is zero",n);
        }
        else
        {
                        printf("%d is negative",n);
        }
        printf("\n");
   return (0);
=======
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
			printf("%d is positive",n);
	}
	else if (n==0)
	{
			printf("%d is zero",n);
	}
	else
	{
			printf("%d is negative",n);
	}
	printf("\n");
	

	return (0);
>>>>>>> 58bdb9440def53e2ac3a670b26bc0600d360ae5b

}

>>>>>>> afdb56298af42cfec83e4d7d22cbf79c6b72355a
