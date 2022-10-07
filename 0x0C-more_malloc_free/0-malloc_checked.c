#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory.
 * @b: amount of bytes.
 *
 * Return: pointer ot the allocated memory.
 * If malloc fails, status value is equal to 98.
 *
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
