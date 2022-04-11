#include <stdio.h>

/*
 * Main - printing teh alphabet
 *
 * Return - completed with zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
