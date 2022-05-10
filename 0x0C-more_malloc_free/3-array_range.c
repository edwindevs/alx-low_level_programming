#include "main.h"
#include <stdlib.h>

/**
 * array_range - The array created should contain all the values from min (included) to max
 * @min: first number
 * @max: last number
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
