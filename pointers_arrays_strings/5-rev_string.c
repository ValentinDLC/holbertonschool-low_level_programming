#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to reverse
 *
 * Description: This function swaps characters from the start and the end
 * of the string until it reaches the middle, effectively reversing the string.
 */
void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

