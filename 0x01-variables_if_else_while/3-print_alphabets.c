
#include <stdio.h>

/**
* main - prints all possible combinations of two -digits numbers
*
* Return: 0
*/
int main(void)
{
int x;
int y;

x = 'a';

for (; x <= 'z'; x++)
{
	putchar(x);

}
y = 'A';

for (; y <= 'Z'; y++)
{
	putchar(y);

}


putchar('\n');

return (0);




}
