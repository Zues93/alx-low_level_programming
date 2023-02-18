#include <stdio.h>

int main() {
char c = 'a';
int i;
    
// Print lowercase letters
for (i = 0; i < 26; i++) {
putchar(c);
c++;
}
    
c = 'A';
    
// Print uppercase letters
for (i = 0; i < 26; i++) {
putchar(c);
c++;
}
    
putchar('\n');
    
return 0;
}
