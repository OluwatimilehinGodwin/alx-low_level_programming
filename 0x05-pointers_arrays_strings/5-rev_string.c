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
int trix = 0;

while (*(s + trix) != '\0')
{
	_putchar(*(s + trix));
	trix++;
}
_putchar('\n');
while (*(s + count) != '\0')
{
	count++;
}
count = count - 1;
if (count > 0)
{
	while (count > 0)
	{
		_putchar(*(s + (count)));
		--count;
	}
	_putchar(*s);
	_putchar('\n');
}
else
{
	_putchar('\n');
}
}
