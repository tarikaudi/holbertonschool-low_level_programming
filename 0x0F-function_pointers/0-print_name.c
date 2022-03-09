#include "function_pointers.h"

/**
 *print_name - main main
 *@name: name
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
