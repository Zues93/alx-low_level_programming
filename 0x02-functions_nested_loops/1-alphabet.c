#include "main.h"
/**
 * that prints - the alphabet, in lowercase
 * discription:function that prints the alphabet, in lowercase.
 */
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
