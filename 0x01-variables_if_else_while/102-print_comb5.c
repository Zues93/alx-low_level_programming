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
int a;
int b;
int c;

a = 0;
while (a <= 7)
{
b = a + 1;
while (b <= 8)
{
c = b + 1;
while (c <= 9)
{
putchar(a + 48);
putchar(b + 48);
ptchar(c + 48);
if (a < 7 || b < 8 || c < 9)
{
putchar(',');
putchar(' ');
}
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
