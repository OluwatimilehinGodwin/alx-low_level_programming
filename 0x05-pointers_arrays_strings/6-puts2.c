#include "main.h"

/**
 * puts2 - entry point
 * @str: active variable
 *
 * Description: function that prints every other
 * character of a string, starting with the first character,
 * Return: 0
 */
void puts2(char *str)
{
int count = 0;

while (*(str + count) != '\0')
{
	_putchar(*(str + count));
	if (*(str + count) = "\\")
	{
		break;
	}
	count = count + 2;
}
_putchar('\n');
}
