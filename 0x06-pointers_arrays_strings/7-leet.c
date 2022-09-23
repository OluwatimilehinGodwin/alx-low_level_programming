#include "main.h"

/**
 * leet - entry point
 * @p: active variable
 *
 * Description: function to convert certain alphabeth to numbers
 * Return: 0
 */
char *leet(char *p)
{
int q, r;
char l[] = "aAeEoOtTlL";
char m[] = "4433007711";

for (q = 0; *(p + q) != '\0'; q++)
{
	for (r = 0; r <= 9; r++)
	{
		if (*(p + q) == l[r])
		{
			*(p + q) = m[r];
		}
	}
}
return (p);
}
