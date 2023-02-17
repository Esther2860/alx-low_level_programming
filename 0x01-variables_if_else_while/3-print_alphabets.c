#include <stdio.h>

/**
 * main entry - int main func
 * description - print alphabet in lowercase
 * and in uppercase followed by a newline
 * author: Esther Muthoni
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
