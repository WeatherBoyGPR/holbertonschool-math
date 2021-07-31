#include "holberton.h"

/**
 * display_complex_number - will print a complex number
 * @c: the complex number to print
 *
 * Return: not applicable
 */
void display_complex_number(complex c)
{
	double neg;

	if (c.re || c.im)
	{
		if (c.re)
			printf("%g", c.re);
		if (c.re && c.im > 0)
			printf(" + ");
		else if (c.re && c.im < 0)
			printf(" - ");
		if (c.im > 0)
			printf("%gi", c.im);
		else if (c.im < 0)
		{
			neg = (c.im * -1);
			printf("%gi", neg);
		}
	}
	printf("\n");
}
