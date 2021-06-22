#include "holberton.h"
/**
 * main - entry point into the program
 * print_alphabet - a function that prints the alphabet in lowercase
 * Return: Always 0 equals success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	return;
}
