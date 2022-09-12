#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative
 * Return: Always 0 (Success)
 */

int main(void)

{
        int n;
        
	srand(time(0));
        n = rand() - RAND_MAX / 2;

		/*my code*/
       	 	if (n > 0)
		{	
		printf("%d is positive\n", n);
        	}
		else if (n == 0)
        	{
		printf("%d is zero\n", n);
        	}
		else if (n < 0)
        	{
		printf("%d is negative\n", n);
        	}
		return (0);
       	 	}
