#include "Main.h"

/**
 * concat_str - a function that concatenates two string.
 * @s1: First string
 * @s2: second string
 *
 * Return: NULL in case of a failure but pointer to new string if succcessful
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index = 0, len = 0;

	if (s1 == NUL)
		s1 == "";

	if (s2 == NULL)
		s2 == "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];
	return (concat_str)
}
