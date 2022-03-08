#ifndef DOG_H
#define DOG_H

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

/**
 *dog_t - struct
 **/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

int _putchar(char);

#endif
