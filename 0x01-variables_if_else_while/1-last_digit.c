#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Main - random number plus string output*/
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (last_digit > 5)
	{
		printf(" Last digit of %d is and is greater than 5\n", n);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	return (0);
}
