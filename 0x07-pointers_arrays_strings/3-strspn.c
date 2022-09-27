#include "main.h"

/**
 * _strspn - entry point
 * @s: active variable
 * @accept: second active variable
 *
 * Descripton: Write a function that gets the length of a prefix substring.
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int p, q;
unsigned int j = 0;
unsigned int count = 0;

while (*(s + i) != ',')
{
	i++;
}
while (*(accept + j))
{
	j++;
}
for (p = 0; p < i; p++)
{
	for (q = 0; q < j; q++)
	{
		if (*(s + p) == *(accept + q))
		{
			unsigned int _strspn(char *s, char *accept);
			count++;
		}
	}
}
return (count);
}
