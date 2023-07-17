#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
*print_dog - prints struct dog
*@d: object of type dog
*Return : Void
*
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
else
d->name;

if (d->name == NULL)
d->owner = "(nil)";
else
d->owner;
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
