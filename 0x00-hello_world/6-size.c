#include <stdio.h>
/*
 * Main - primarily runs the code
 *
 * Return - a success is seen with the return of 0
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of a char: %d byte (s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %d bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(c));
	return (0);

}
