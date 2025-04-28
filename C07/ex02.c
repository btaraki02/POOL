//#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
	
    int i = 0;
    int *range = (int *)malloc(sizeof(int) * (max - min));
    if (!range)
        return NULL;
    while(i + min < max)
    {
        range[i] = min + i;
        i++;
    }
    return range;
}
int ft_ultimate_range(int **range, int min, int max)
{
    *range = ft_range(min,max);
    if(*range == NULL)
    {
        return(-1);
    }
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    return (max -min);
}
/*int main()
{
    int *array = NULL;
    int size;
    int i = 0;

    size = ft_ultimate_range(&array, 1, 5);
    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Size: %d\n", size);
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    free(array);
    return 0;
}*/