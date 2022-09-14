#include <unistd.h>
#include "main.h"

/**
 * _putchar - Returns 0 to the output
 *
 * @c: Write a program that prints "_putchar"
 *
 * Return: Always 1 (Correct)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
