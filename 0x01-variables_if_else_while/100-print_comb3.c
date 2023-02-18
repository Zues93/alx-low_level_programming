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
int j;

i = 0;
while (i <= 8)
{
j = i + 1;
while (j <= 9)
{
putchar(i + 48);
putchar(j + 48);
if (i < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
