#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - entry point
 * @s1: destination string
 * @s2: source string
 *
 * Description: function to concatinate tow strings
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k, l;

i = strlen(s1);
j = strlen(s2);
l = (i + j + 1);
if (s2 == NULL)
{
	return (s1);
}
s1 = malloc(l * sizeof(char));
if (s1 == NULL)
{
	return (NULL);
}
i++;
for (; i <= l; i++)
{
	for (k = 0; k < j; k++)
	{
		*(s1 + i) = *(s2 + k);
		break;
	}
}
return (s1);
}
