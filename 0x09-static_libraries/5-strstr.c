#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *o = needle;

		while (*i == *o && *o != '\0')
		{
			i++;
			o++;
		}

		if (*o == '\0')
			return (haystack);
	}

	return (0);
}
