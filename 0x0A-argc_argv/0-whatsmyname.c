#include <stdio.h>
/**
 *main - prints the program name, followed by a new line.
 *@argc:argurment count
 *@argv: pointer to array of strings
 *return: Always 0.
 */

main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s ", argv[i]);/*printing the string to stdout*/
	}
	printf("\n");/*printing a new line*/
	return (0);/* Always return 0*/
}
