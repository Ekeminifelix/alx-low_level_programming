#include "holberton.h"
/**
 * print_alphabet -a function that prints the alphabets in lowercase
 *
 *
 *
 * Return: Always 0 (succes)s
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');

}
