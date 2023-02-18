#include <stdio.h>

int main(void)
{
int i;

i = 97;
while (i <= 122)
{
putchr(i);
i++;
}
putchr('\n');
return (0);
}
