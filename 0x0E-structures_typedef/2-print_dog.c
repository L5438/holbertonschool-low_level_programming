#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print function dog from dog.h
 * @d: Name of the structure
 */

void print_dog(struct dog *d)
{
	printf("Name is %s\n", (*d).name);
	printf("Age is %f\n", d->age);
	printf("Owner is %s\n", d->owner);
}
