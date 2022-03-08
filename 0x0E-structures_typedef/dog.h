#include <stdio.h>


/**
*struct dog - creates a stuct of dog
*@name: dog name
*@age: dog age
*@owner: dogs owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

int putchar(char);
