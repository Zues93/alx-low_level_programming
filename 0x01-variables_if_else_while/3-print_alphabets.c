#include <stdio.h>
/**
 * this task about loop
 * discription : print the alphabet in lower case 
 * and the in uppercase follow by a new line 
 */
int main(void)
{
int i;

i = 97;
while (i <= 122)
{
putchar(i);
i++;
}
i = 65;
while (i <= 90)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
