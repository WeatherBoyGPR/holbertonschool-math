#include "holberton.h"

/**
 * display_complex_number - will print a complex number
 * @c: the complex number to print
 *
 * Return: not applicable
 */
void display_complex_number(complex c)
{
	if (c.re || c.im)
	{
		if (c.re)
			printf("%g", c.re);
		if (c.re && c.im)
			printf(" + ");
		if (c.im)
			printf("%gi", c.im);
	}
	printf("\n");
}
