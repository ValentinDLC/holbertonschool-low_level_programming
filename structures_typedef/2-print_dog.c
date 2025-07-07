#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: If any element of the structure is NULL, it prints (nil).
 * If the struct itself is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

