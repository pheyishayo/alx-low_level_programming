#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry of the project
 *
 * Return: Always 0
*/
int main(void)
{
	int n;
	int lastdigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
lastdigit = n % 10;
printf("Last digit of %d is %d and is ", n, lastdigit);
if (lastdigit > 5)
printf("greater than 5");
else if (lastdigit == 0)
printf("0");
else
printf("less than 6 and not 0");

printf("\n");
	return (0);
}
