#include "main.h"
#include <stdlib.h>
/**
*argstostr - concatenates all arguments of the program.
*@ac: argument count.
*@av: pointer to array of size ac.
*Return: NULL if ac == 0 or av == null, Pointer to new string.
*NULL on fail.
*/
char *argstostr(int ac, char **av)
{
int a, i, j, size;
	char *arr;

size = 0;
j = 0;
if (ac == 0 || av == NULL)
return (NULL);
a = 0;
while (a < ac)
	{
i = 0;
while (av[a][i])
{
size++;
i++;
}
size++;
a++;
}
arr = malloc((sizeof(char) * size) +1);
if (arr == NULL)
return (NULL);
a = 0;
while (a < ac)
{
i = 0;
while (av[a][i])
{
arr[j] = av[a][i];
i++;
j++;
}
arr[j] = '\n';
j++;
a++;
}
arr[j] = '\0';
return (arr);
}
