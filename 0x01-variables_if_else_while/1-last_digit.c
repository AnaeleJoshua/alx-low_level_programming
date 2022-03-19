#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */
/*computes a random number, everytime it is compiled*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  	last_digit = -1*(n%10);
	if (last_digit>5)
	printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if (last_digit==0)
		printf("Last digit of %d is %d and is 0", n, last_digit);
	else if (0<last_digit<6)
		printf("Last digit of %d is %d and is less than 6 and not 0",n, last_digit);
	else
		printf("last digit is %d", n);
	return (0);
}

