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
	int *arr, i = 0, j = min;

	if (min > max)
		return (0);

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);

	while (i <= max - min)
		arr[i++] = j++;

	return (arr);
}
