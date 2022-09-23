#include "main.h"

/**
 * rot13 - entry point
 * @sp13: active variable
 *
 * Description: encoding using rot13
 * Return: 0
 */
char *rot13(char *sp13)
{
int c1, c2;
char ch1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ch2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (c1 = 0; *(sp13 + c1) != '\0'; c1++)
{
	for (c2 = 0; c2 < 52; c2++)
	{
		if (ch1[c2] == *(sp13 + c1))
		{
			*(sp13 + c1) = ch2[c2];
			break;
		}
	}
}
return (sp13);
}
