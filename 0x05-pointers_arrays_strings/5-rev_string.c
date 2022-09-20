#include "main.h"

/**
 * rev_string - entry point
 * @s: active variable
 *
 * Description: function that reverses a string
 * Return: 0
 */
void rev_string(char *s)
{
int count2 = 0;
int count = 0;

while (*(s + count2) != '\0')
{
	_putchar(*(s + count2));
	count2++;
	/* to successfully print the string passed */
}
_putchar('\n');
while (*(s + count) != '\0')
{
	count++;
}
count = count - 1;
while (count > 0)
{
	_putchar(*(s + count));
	count--;
}
_putchar(*(s + 0));
_putchar('\n');
}
