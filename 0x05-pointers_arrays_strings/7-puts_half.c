#include "main.h"

/**
 * puts_half - entry point
 * @str: active variable
 *
 * Description:  function that prints half of a string
 * followed by a new line
 * Return: 0
 */
void puts_half(char *str)
{
int k, i, n;
int count = 0;

while (*(str + count) != '\0')
{
	count++;
}
i = (count % 2);
if (i == 0)
{
	k = (count / 2);
	while (*(str + k) != '\0')
	{
		_putchar(*(str + k));
		k++;
	}
}
else
{
	n = (((count - 1) / 2) + 1);
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
}
_putchar('\n');
}
