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
int count = 0;

while (*(str + count) != '\0')
{
	count++;
}
count = count-1;
while (count > 0)
{
	_putchar(*(s + count));
	count--;
}
_putchar(*(s + 0));
_putchar('\n');
}
