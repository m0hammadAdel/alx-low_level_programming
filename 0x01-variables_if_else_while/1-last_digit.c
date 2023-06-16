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
	int n,l;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        l = n%10;

        printf("Last digit of %d is %d and is ", n, l);

        if (l > 5)
                printf("greater than 5\n");
        else if(l<6 && l!=0)
                printf("less than 6 and not 0\n");
        else
                printf("0");

        return (0);
}
