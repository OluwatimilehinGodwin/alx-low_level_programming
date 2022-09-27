#include "main.h"

/**
 * _strstr - entry point
 * @haystack: active variabke
 * @needle: second active variable
 *
 * Description: Write a function that locates a substring.
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
int c = 0;

while (needle[c] != '\0')
{
	c++;
}
for (i = 0; haystack[i]; i++)
{
	if (haystack[i] == needle[0])
	{
		j = 0;
		while (j < c)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			else
			{
				return (haystack + (i + j));
				j++;
			}
		}
	}
}
return (0);
}
