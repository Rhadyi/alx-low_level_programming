#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
