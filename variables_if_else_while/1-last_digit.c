#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * and prints the last digit of the number with specific conditions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0)); /* Seed the random number generator */
	n = rand() - RAND_MAX / 2; /* Assign a random number to n */
	last_digit = n % 10; /* Calculate the last digit of n */

	/* Print the last digit and check the conditions */
	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
		printf(" and is greater than 5\n");
	else if (last_digit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");

	return (0);
}
