#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - makes a memory valid for a struct dog
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->onwer);
		free(d->name);
		free(d);
	}
}
