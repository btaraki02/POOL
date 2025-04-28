#include <stdlib.h>
int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return (0);
    }	
    int i = 0;
    int *arr = (int *)malloc(sizeof(int) * (max - min));
    while(i + min < max)
    {
        arr[i] = min + i;
        i++;
    }
    return arr;
}