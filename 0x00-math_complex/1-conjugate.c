#include "holberton.h"

/**
 * conjugate - will display the conjugate of a complex number
 * @c: the complex number to be processed
 *
 * Return: the conjugate of c
 */
complex conjugate(complex c)
{
	if (c.im)
		c.im = (c.im * -1);
	return (c);
}
