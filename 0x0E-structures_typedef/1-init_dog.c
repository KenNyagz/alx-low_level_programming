#include <stdlib.h>
#include "dog.h"

/**
*init_dog - initialises struct dog
*@d: a variable of type dog
*@name: member of d
*@age: member of d
*@owner: member of d
*Return: Void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;


}
