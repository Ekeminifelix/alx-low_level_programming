#include <stdio.h>

/**
* main - prints all possible combinations of two -digits numbers
*
* Return: 0
*/
int main(void)
{
int x;

x = 'a';
for (; x <= 'z'; x++)

{

if (x != 'e' && x != 'q')
	putchar(x);



}
putchar('\n');

return (0);



}
