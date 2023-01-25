#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	int num = 2;

	while (num < 20)
	{
		if (num % 2 == 0)
			printf("%d\n", num);
		num++;
	}
	return (0);
}
