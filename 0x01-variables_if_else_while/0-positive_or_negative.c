#include <stdlib.h>
#include <time.h>
/* Here contains the Headers */
#include <stdio.h>
/* betty style doc for the main function in here */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Body of code */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
	 	printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");	
	return (0);
}