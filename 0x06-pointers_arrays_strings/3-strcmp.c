#include "main.h"

/**
 * _strcmp - entry point
 * @s1: active variable
 * @s2: sevond avtive variable
 *
 * Description: a function to compare two strings
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int i;
int flag = 0;

for (i = 0; s1[i] != '\0' || s2[i] != 0; i++)
{
	if (s1[i] !=  s2[i])
	{
		flag = (s1[i] - s2[i]);
		break;
	}
	else
	{
		continue;
	}
}
return (flag);
}
