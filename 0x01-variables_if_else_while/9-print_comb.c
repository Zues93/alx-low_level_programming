#include <stdio.h>

/**
 * main - Entry point
 *
 * This function prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
int i;

i = 48;
while (i <= 57)
{
putchar(i);
putchar(',');
putchar(' ');
i++;
}
putchar('\n');
return (0);
}
