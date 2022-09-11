#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Main - Prints the alphabet without the letter q and e.
 *
 * Return: Will always be 0 (Correct)
 *
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if(i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
