#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string as an argument
 * @f: points to a function as an argument
 * Return: noting, void function
 **/

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;

	f(name);
}
