#include "holberton.h"
/**
 * _strncpy - Function that copies a string
 * @dest: destiny string.
 * @src: source string.
 * @n: number of charaters for copy.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	short int leng, j;

	leng = 0, j = 0;
	while (src[leng] != '\0')
		leng++;
	while (src[j] != '\0')
	{
		if (j == n)
			break;
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
