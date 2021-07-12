#include <stdio.h>
/**
 *main - writes name of programe
 *@argc:argurment count
 *@argv: pointer to array of strings
 *return: o
 */

int main (int argc, char *argv[])

{

	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);

	}

	printf("\n");

	return(0);



}
