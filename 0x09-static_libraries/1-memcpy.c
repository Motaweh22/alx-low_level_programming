#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: storedd
 *@src: copiedd
 *@n: numberr
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int l = n;

	for (; t < l; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
