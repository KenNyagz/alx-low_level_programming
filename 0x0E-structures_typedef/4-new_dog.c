#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
*new_dog - creates a new object of type dog_t
*@name: member of new_dog
*@age: member of new_dog
*@owner: member of new_dog
*Return: pointer to struct new_dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = malloc((strlen(name) + 1) * sizeof(char));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

strcpy(new_dog->name, name);

new_dog->owner = malloc((strlen(name) + 1) * sizeof(char));
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog);
return (NULL);
}

strcpy(new_dog->owner, owner);
new_dog->age = age;

return (new_dog);
}
