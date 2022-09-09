#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/*computes a random number, everytime it is compiled*/
/* betty style doc for function main goes there */
/**
 * this program pribts
 * a random number
 * returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n)
	else
		printf("%d is negative", n);
	return (0);
}

