#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
char *cont;
int i, j;
int c = 0;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
for (i = 0; s1[i]; i++)
{
	c++;
}
for (j = 0; s2[j]; j++)
{
	c++;
}
cont = malloc((c + 1) * sizeof(char));
if (cont == NULL)
{
	return (NULL);
}
for (i = 0; s1[i]; i++)
{
	cont[i] = s1[i];
}
for (j = 0; s2[j]; j++, i++)
{
	cont[i] = s2[j];
}
return (cont);
return (NULL);
}
