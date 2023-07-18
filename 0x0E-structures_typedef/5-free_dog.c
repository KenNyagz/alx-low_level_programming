#include <stdlib.h>

#include "dog.h"

/**
*free_dog - frees memory occpied by struct dog
*@d: Pointer to memory block to be freed
*Return: Void
*/

void free_dog(dog_t *d)
{
if (d != NULL)
free(d);
free(d->name);
free(d->owner);

}
