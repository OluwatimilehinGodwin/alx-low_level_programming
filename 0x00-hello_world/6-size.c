#include <stdio.h>

/**
 * main - to print sizes of c variable types
 *
 * Description: using the printf and the sizeof to work here
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long xl;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", sizeof(xl));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
