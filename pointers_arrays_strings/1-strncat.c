#include <stdio.h>

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string to append to.
 * @src: The source string to append from.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}

