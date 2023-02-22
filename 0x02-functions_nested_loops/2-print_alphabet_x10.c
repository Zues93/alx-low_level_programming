#include "main.h"
#include <stdio.h>
void print_alphabet_x10(void)
{
	char c;
	int i;
	i = 1;
	while (1 <= 10)
	{
		c = 'a';
		while ( c <= 'z')
		{
			putchar(c);
			c++;
		}
		i++;
		putchar('\n');
	}
}
int main()
{
	print_alphabet_x10();
	return 0;
}

