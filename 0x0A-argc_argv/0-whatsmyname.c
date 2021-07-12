#include <stdio.h>
/**
 *main - prints the program name, followed by a new line.
 *@argc:argurment count
 *@argv: pointer to array of strings
 *Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s", argv[i]);

	}

	printf("\n");
	return (0);
}
