#include <dog.h>

/**
*init_dog - iniciate a dog
*struct dog - dog
*@d: dog d
*@name: name
*@age: age
*@owner: owner
*Return: 0 as always
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
