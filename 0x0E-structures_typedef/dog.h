#ifndef dog
#define dog
/**
*struct dog - custom data type
*@name: First member
*@age: second member
*@owner: third member
*Description:
*/

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
char *name;
float age;
char *owner;

} my_dog;

#endif
