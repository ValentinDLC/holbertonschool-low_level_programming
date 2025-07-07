#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated memory space,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[length] = '\0';
	return (dup);
}
