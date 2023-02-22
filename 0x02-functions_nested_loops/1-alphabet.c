#include "main.h"
/**
 * function that prints - the alphabet, in lowercase
 * discription: this a a type of a function with no input or ouyput.
 * return; always 0 (success)
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
