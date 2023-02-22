#include "main.h"
/**
 * - the alphabet, in lowercase
 * discription:print_alphabet - print all alphabet in lowercase 
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
