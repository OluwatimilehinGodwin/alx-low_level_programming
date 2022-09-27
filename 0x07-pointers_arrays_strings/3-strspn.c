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
unsigned int p, q;

for (p = 0; s[p]; p++)
{
	for (q = 0; accept[q]; q++)
	{
		if (s[p] == accept[q])
		{
			break;
		}
	}
	if (! accept[q])
	{
		break;
	}
}
return (p);
}
