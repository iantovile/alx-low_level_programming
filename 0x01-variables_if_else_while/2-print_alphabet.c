#include <stdio.h>

/*
 * Main - printing teh alphabet
 *
 * Return - completed with zero
 */

int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar("\n");
	return (0);

}
