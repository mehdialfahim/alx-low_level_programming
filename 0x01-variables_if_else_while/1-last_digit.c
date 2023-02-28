#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
    { 
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
   
    int last_digit = (n % 10);
    printf("The last digit of %d is %d\n", n, last_digit);
    
    if ((n > 5) && (n == 6))
    {
        printf("and is greater than 5");
    }
    else if (n == 0)
    {
        printf("and is 0");
    }
    else
    {
        printf("and is less than 6 and not 0");
    }
    return 0;
    }

}
