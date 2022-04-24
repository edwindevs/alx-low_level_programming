#include "main.h"
/**
 * _strcat function -  concatenates two strings
 * appends the src string to the dest string
 * Returns a pointer to the resulting string dest
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (dest[len] != '\0')
		len++;
	while (src[len2] != '\0')
	{
		*(dest + len) = src[len2];
		len++;
		len2++;
	}
	return (dest);
}
