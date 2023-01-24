#include <stdio.h>
/**
 * main - point of entry for the program
 * @argc: counts the number of CLA passed to the program
 * @argv: array of argument strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* check if 2 arguments were passed */
	if (argc == 2)
	{
		printf("Hi %s, welcome to %s \n", argv[1], argv[0]);
	}
		else
		{
			printf("Sorry try again later");
		}
	return (0);
}
