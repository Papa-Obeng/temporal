#include <stdio.h>
#include <string.h>

/**
 * main - the point of entry for the program
 * strcmp - function to compare the two strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result;
	char actual_pass[] = "onetime";

	result = strcmp(actual_pass, argv[1]);

	if (result == 0)
	{
		printf("Hello, Welcome!\n");
	}
	else
	{
		printf("Sorry wrong password, try again later\n");
	}
	return (0);
}
