#include "dog.h"
#include <stdlib.h>

/**i
 *free_dog - free var
 *@d: pointer
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
