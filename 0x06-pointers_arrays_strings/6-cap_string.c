#include "main.h"

/**
 * cap_string - entry point
 * @s: active variable
 *
 * Description: a function to capitalize all inputs
 * Return: 0
 */
char *cap_string(char *s)
{
int c = 0;

while (s[c] != '\0')
{
	if (s[c] >= 97 && s[c] <= 122)
	{
		s[c] -= 32;
		c++;
	}
	else
	{
		c++;
	}
}
return (s);
}
