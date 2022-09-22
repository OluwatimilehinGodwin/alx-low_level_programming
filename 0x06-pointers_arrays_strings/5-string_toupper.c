#include "main.h"

/**
 * string_toupper - entry point
 * @str: active variable
 *
 * Description: function that changes all lowercase
 * letters of a string to uppercase
 * Return: 0
 */
char *string_toupper(char *str)
{
int i;

for  (i = 0; str != '\0'; i++)
{
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = (str[i] - 32);
		return (str[i]);
	}
	else
	{
		return (str[i]);
	}
}
}
