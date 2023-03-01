#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @src: The string to append
 * @dest: The string to append src to
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
