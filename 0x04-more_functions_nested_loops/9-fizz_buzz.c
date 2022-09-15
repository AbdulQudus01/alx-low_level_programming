#include <stdio>
#include "main.h"

/**
 * main - prints Buzz for number 3 and Fizz for number 5 and FizzBuss for 3 and 5
 *
 * Return: always 0
 *
 */
int main(void)
{
	int n;

	n = 1;

	for (n = 1; n < 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
