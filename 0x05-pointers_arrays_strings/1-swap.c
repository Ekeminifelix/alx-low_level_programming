#include "holberton.h"

/**
 *swap_int - function that swaps the values of two integers.
 *@a: a character in the ASCII chart
 *@b: a character in the ASCII chart
 *Return: void no return
 */


void swap_int(int *a, int *b);
{
	int temp;


	temp = *a;

	*a = *b;

	*b = temp;
}

