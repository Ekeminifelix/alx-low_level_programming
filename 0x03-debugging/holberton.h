#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

void positive_or_negative(int i);

#include <stdio.h>
#include "holberton.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}


#endif /* HOLBERTON_H */
