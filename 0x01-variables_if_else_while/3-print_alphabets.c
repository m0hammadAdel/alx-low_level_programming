#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char a='a';
        int i,j;

        for (j = 0; j < 2 ; j++)
        {
                for (i = 0; i < 26 ; i++)
                        putchar(a+i);
                a = 'A';
        }
        putchar('\n');

        return (0);
}
