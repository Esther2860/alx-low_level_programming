#include "main.h"

/**
* _strspn - This function gets the length of a prefix substring
* @s: The string to search through
* @accept: The string to search from
* Return: The number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
			break;
	}
	if (!accept[j])
		break;
}
return (i);
}
