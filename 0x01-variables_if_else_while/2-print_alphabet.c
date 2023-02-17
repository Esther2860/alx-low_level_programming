#include <stdio.h>
#include <stdlib.h>

/**
 * entry point - int main function
 * description - print out alphabets in lower case
 * author: Esther Muthoni
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
