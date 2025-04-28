#include <stdlib.h>
int *ft_range(int min, int max)
{
    if (min >= max)
    {
        return (0);
    }	
    int i = 0;
    int *range = (int *)malloc(sizeof(int) * (max - min));
    while(i + min < max)
    {
        range[i] = min + i;
        i++;
    }
    return range;
}