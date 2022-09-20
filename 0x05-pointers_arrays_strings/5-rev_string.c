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
int tx = 0;

while (*(s + tx) != '\0')
{
	_putchar(*(s + tx));
	tx++;
}
_putchar('\n');
}
