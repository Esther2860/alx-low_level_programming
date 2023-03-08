#include "main.h"

/**
 * _puts_recursion - prints's a string followed by a new line
 * @s: string to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
/* if the pointer index reaches the null terminator, newline & return */
if (*s == '\0')
{
_putchar('\n');
return;
}
/* otherwise, print the current array index */
_putchar(*s);
/* call function */
_puts_recursion(s + 1);
}
