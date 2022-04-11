#ifndef DOG_H
#define DOG_H
/**
 *struct dog- adog's basic info
 *@name:char
 *@age:float
 *@owner:char
 *stract:struct type
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
