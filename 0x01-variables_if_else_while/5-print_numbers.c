#include <stdio.h>

/**
 * Main - Prints numbers from 0 to 9.
 *
 * Return value is Always 0 (Correct)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
