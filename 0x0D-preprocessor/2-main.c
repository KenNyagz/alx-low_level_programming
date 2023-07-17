#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*main - prints file code is compiled in
*
*Return: 0
*/

int main(void)
{
/*#define __FILE__*/
printf("%s\n", __FILE__);

return (0);
}
