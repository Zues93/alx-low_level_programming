#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int *p;
n = 402;
p = &n;
_putchar("n = %d\n", n);
*p = 98;
_putchar("n = %d", n);
return (0);
}
