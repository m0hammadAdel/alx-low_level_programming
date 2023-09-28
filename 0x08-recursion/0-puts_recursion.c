#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	while(*s != '\0'){
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
