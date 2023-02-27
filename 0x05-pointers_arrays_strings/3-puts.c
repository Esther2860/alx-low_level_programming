#include <stdio.h>
/**
 *  _puts - This function prints a string, followed by a newline
 *  to the standard out
 *  @str: The string to print out to stdout
 */
void _puts(char *str)

{

int i;

for (i = 0; str[i] != '\0'; i++)
putchar(str[i]);

putchar('\n');

}
