#include <stdlib.h>
#include "main.h"

/**
* *_strdup - copies the string given as parameter
* @str: string to duplicate
*
* Return: pointer to the copied string (Success), NULL (Error)
*/
char *_strdup(char *str)
{
int i;
char *disp;
unsigned int a = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
a++;

disp = malloc(sizeof(char) * a + 1);
if (disp == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
disp[i] = str[i];

return (disp);
}
