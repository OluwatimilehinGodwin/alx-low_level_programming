#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: string pointer
 *
 * Description: function to duplicate string and store
 * return pointer to new string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
char *new;
int i = 0;
int j;

if (str == NULL)
{
	return (NULL);
}
while (*(str + i) != '\0')
{
	i++;
}
i += 1;
new = malloc(sizeof(char) * i);
if (new == NULL)
{
	return (NULL);
}
for (j = 0; j < i; j++)
{
	*(new + j) = *(str + j);
}
return (new);
}
