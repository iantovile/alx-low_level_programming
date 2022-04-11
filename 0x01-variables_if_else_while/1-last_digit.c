#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Main - random number plus string output*/
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10

	if (last > 5)
	{
		printf(" Last digit of %d is and is greater than 5\n", n);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	return (0);
}
