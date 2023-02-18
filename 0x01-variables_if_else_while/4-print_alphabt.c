#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and check its 
 * Ruturn: 0 
 */
int main() 
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++) 
{
if (letter != 'e' && letter != 'q') 
{
putchar(letter);
}
}
putchar('\n');

return 0;
}
