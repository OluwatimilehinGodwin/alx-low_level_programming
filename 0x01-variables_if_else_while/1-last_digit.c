#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: the last digit file operations
 * Return: 0
 */
int main(void)
{
int n;
int j; /*j is the last digit*/

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
j=n % 10;
if (j > 5)
{
	printf("Last digit of %i is %i and is greater than 5\n", n,j);
}
else if (j == 0)
{
	printf("Last digit of %i is %i and is 0\n", n,j);
}
else if (j < 6 && !=0)
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n,j);
}
return (0);
}
