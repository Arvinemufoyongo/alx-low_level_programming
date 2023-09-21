#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: number of bytes to concentrate
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
