#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int x,y,z;

        for(x = '0'; x < '9'; x++)
        {
                for(y = x +1; y <= '9'; y++)
                {
                        if(y != x)
                        {
                                putchar(x);
                                putchar(y);

                                        if(x == '8' && y == '9')
                                                continue;
                                                putchar(',');
                                                putchar(' ');
                        }
                }
        }
        putchar('\n');
        return (0);
}
