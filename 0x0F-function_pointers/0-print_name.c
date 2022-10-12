#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: name to ne printed
 * @f: function to print name
 *
 * Description: a function to print the name passed into it
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
