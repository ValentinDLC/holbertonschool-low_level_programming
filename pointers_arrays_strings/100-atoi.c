#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (s[i] != 0)
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		else if (s[i] == 43)
		{
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			found_digit = 1;
			result = (result * 10) + (s[i] - 48);
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}

