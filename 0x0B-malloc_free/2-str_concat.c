#include <stdlib.h>
#include "main.h"

/**
* *str_concat - concatenates two strings
* @s1: string to concatenate
* @s2: other string to concatenate
*
* Return: pointer to the new string created (Success), or NULL (Error)
*/
char *str_concat(char *s1, char *s2)
{
int s1len = 0;
int s2len = 0;
int i;
char *cat;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
s1len++;
for (i = 0; s2[i] != '\0'; i++)
s2len++;

cat = malloc(sizeof(char) * (s1len + s2len) +1);

if (cat == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
cat[i] = s1[i];
for (i = 0; s2[i] != '\0'; i++)
cat[s1len + i] = s2[i];

return (cat);

}
