#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *init_dog-intialzes
 *struct dog-hhh
 *@d:structchar
 *@name:char
 *@age:float
 *@owner:char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;

}
