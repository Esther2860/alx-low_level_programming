#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string, or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i, j;
char *ptr;
if (s1 == NULL)
{
s1 = malloc(sizeof(char));
if (s1 == NULL)
{
return (NULL);
}
*s1 = '\0';
}
if (s2 == NULL)
{
s2 = malloc(sizeof(char));
if (s2 == NULL)
{
return (NULL);
}
*s2 = '\0';
}
/* get length of s1 */
while (s1[len1] != '\0')
len1++;
/* get length of s2 */
while (s2[len2] != '\0')
len2++;
/* allocate memory for ptr */
ptr = malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < (len2 + 1); j++)
{
ptr[i] = s2[j];
i++;
}
return (ptr);
}
