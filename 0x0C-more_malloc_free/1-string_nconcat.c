#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - entry point
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to be catenated
 *
 * Description: a function to dynamically concatenate two strings
 * taking note of n nmber of s2 string
 * Return: a pointer to the concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *array;
int count = 0;
unsigned int i, j, p, q;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i]; i++)
{
	count++;
}
for (j = 0; s2[j]; j++)
{
	count++;
}
count++;
if (n > j)
{
	n = j;
}
array = malloc(sizeof(char) * count);
if (array == NULL)
{
	return (NULL);
}
for (p = 0; p < i; p++)
{
	array[p] = s1[p];
}
for (q = 0; q < n; q++)
{
	array[p + q] = s2[q];
}
return (array);
}
