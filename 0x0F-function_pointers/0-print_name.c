#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - print a name
 * @name: name to print print
 * @f: pointer to the print function
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
