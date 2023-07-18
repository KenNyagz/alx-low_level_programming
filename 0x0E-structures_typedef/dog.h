#ifndef DOG_H
#define DOG_H
/**
*struct dog - custom data type
*@name: First member
*@age: second member
*@owner: third member
*Description:
*/

struct dog
{
char *name;
float age;
char *owner;

} my_dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
