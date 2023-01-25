#include <stdio.h>
/**
 * main - entry point for the program
 *
 * Return: 0
 */
int main(void)
{
	int x;
	char message[15] = {73, 108, 111, 118, 101, 121, 111,
		117, 102, 114, 111, 109, 84, 105,
		109};

	for (x = 0; x <= message[15]; x++)
	{
		if (message[x] == 0 || message[x] == 4 || message[x] == 7 || 
				message[x] == 11)
		{
			putchar(' ');
		} else
			printf("%c", message[x]);
	}

	return (0);
}
