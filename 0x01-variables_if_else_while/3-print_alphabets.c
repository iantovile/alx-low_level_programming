#include <stdio.h>

/*
 * Main - printing teh alphabet
 *
 * Return - completed with zero
 */

int main(void)
{
        char letter;
	char c = 'A';

        for (letter = 'a'; letter <= 'z'; letter++)
                putchar(letter);

        while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

        return (0);
}

