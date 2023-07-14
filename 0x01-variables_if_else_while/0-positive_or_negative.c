#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and determines if it is positive, zero, or negative.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int n;

    srand(time(0));  // Seed the random number generator with the current time
    n = rand() - RAND_MAX / 2;  // Generate a random number between -RAND_MAX/2 and +RAND_MAX/2

    if (n > 0)
    {
        printf("%d is positive\n", n);  // Print the number if it is positive
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);  // Print the number if it is zero
    }
    else
    {
        printf("%d is negative\n", n);  // Print the number if it is negative
    }

    return (0);  // Return 0 to indicate successful execution
}

