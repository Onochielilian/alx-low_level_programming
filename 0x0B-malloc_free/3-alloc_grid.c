#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - creates a two dimensional array of ints
* @width: width of the matrix
* @height: height of the matrix
*
* Return: pointer to the created matrix (Success)
* or NULL (Error)
*/
int **alloc_grid(int width, int height)
{
int **cat;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
cat = malloc(sizeof(int *) * height);

if (cat == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
cat[i] = malloc(sizeof(int) * width);

if (cat[i] == NULL)
{
free(cat);
for (j = 0; j <= height; j++)
free(cat[j]);
return (NULL);
}
for (j = 0; j < width; j++)
cat[i][j] = 0;

}
return (cat);
}
