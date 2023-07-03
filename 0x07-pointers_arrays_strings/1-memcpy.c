#include "main.h"

/**
* _memcpy - copies data from one memory area to another
*@dest: the destination memory area
*@src: the source memory area
*@n: number of bytes of src being copied to dest
*Return: dest (Result after copying)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
 





dest[i] = src[i];



}

return (dest);

}
