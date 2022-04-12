#include <stdio.h>

/*
 * Main - prints single digit numbers base 10
 *
 * Return - zero in success
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
