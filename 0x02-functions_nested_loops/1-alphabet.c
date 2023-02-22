#include "main.h"
/**
 * that prints - the alphabet, in lowercase
 * discription:function that prints the alphabet, in lowercase.
 * Prototype: void print_alphabet void .
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
