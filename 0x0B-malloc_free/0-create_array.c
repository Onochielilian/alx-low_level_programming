#include <stdlib.h>
#include "main.h"

/**
* *create_array - creates an array of chars,
* and initializes it with a specific char
* @size: size of the array to create
* @c: char to initialize the array c
*
* Return: pointer to the array (Success), NULL (Error)
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *a;
if (size == 0)
return (NULL);

a = malloc(sizeof(char) * size);
if (a == NULL)
return (NULL);

for (i = 0; i < size; i++)

a[i] = c;
return (a);
}
