#include "main.h"
/**
 * a function returns x raised to power of y
 * variable x
 * variable y
 * Return int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return ((x) * _pow_recursion(x, y - 1));
	}
}
