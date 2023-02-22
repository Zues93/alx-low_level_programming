#include "main.h"
/**
 * that prints - the alphabet, in lowercase
 * discription: this a a type of a function with no input or ouyput.
 * return 0
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
