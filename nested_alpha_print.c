#include <stdio.h>
/**
 * main - entry point for the program
 *
 * Return: 0
 */
int main(void)
{
	char alpha;
	char alpha1;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for (alpha1 = 'b'; alpha1 <= 'z'; alpha1++)
		{
			putchar(alpha);
			putchar(alpha1);
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}
