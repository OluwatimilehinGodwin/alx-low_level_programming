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
int z = 0;
int y;
char q[ ] = " \t\n,.!;?\"{}[]";

while (*(s + z) != '\0')
{
	if (*(s + z) >= 97 && *(s + z) <= 122)
	{
		if (z == 0)
		{
			*(s + z) -= 32;
		}
		else
		{
			for (y = 0; y < 13; y++)
			{
				if (*(q + y) == *(s + z - 1))
				{
					*(s + z) -= 32;
				}
			}
		}
	}
	z++;
}
return (s);
}
