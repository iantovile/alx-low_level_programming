#include <stdio.h>

/*
 * Main - printing single digit numbers
 *
 * Return - value zero after success
 */

int main(void)
{

	int c;

	while (c >= 0 && c < 10)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	return (0);
}
