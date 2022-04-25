#include "main.h"
/**
 *_strncat - concatenates strings
 *@dest: A pointer for char to be changed
 *@src: A pointer for char to be changed
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
