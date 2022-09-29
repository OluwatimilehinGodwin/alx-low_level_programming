#include "main.h"

/**
 * mine - entry point
 * @s1: active var
 * @s2: 2nd active var
 * @i: counting int
 *
 * Description: to finish comparison
 * Return: 0
 */
int mine(char *s1, char *s2, int i)
{
if (s1[i] == '\0' && s2[i] == '\0')
{
	return (1);
}
if ((s1[i] == s2[i] || s2[i] == '*') && s1[i] != '\0')
{
	mine(s1, s2, (i + 1));
}
else
{
	return (0);
}
return (0);
}

/**
 * wildcmp - entry point
 * @s1: active variable
 * @s2: second active variable
 *
 * Description: a recursive function to compare two strings
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
if (s1[0] != s2[0] && s2[0] != '*')
{
	return (0);
}
return (mine(s1, s2, 0));
}
