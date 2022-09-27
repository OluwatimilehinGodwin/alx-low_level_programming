#include "main.h"

/**
 * _strspn - entry point
 * @s: active variable
 * @accept: second active variable
 *
 * Description: write a function that gets the
 * length of a prefix substring.
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int c, c2;
unsigned int count = 0;

while (s[i] != '\0')
{
	i++;
}
while (accept[j] != '\0')
{
	j++;
}
for (c = 0; c < i; c++)
{
	for (c2 = 0; c2 < j; c2++)
	{
		if (s[c] == accept[c2])
		{
			count++;
			break;
		}
	}
	if (s[c] != accept[c2])
	{
		break;
	}
}
return (count);
}
