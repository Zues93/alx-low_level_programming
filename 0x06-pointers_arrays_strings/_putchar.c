#include "main.h"
#include <unistd.h>
/**
* _putchar -write the characterc to stdout
* @c. the character to print
*
* retuen: on success 1
* On error, -1 is return , and errno is set appropriately
*/
int _putchar(char C)
{
return (write(1, &c, 1));
}
