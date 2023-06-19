#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - enrty point
*Print all tw digit combinations separated by , and space
*Return: Always 0
*/

int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
  for (j = 49; j <= 57; j++)
  {
    if (i != j)
    
    {
      for (i = 48; i <= 57; i++)
      {
	if (i == j)
	continue;
        {     
          putchar(i);
          putchar(j);
          putchar(',');
          putchar(' ');
        }
      }
    }
 }
putchar('\n');

}
return (0);
}

