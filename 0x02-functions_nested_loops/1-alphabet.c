#include "main.h"

/**
 * main - int main function
 * description - used _putchar function to print alphabets in lower case
 * author: Esther Muthoni
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
}
