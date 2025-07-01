#include <stdlib.h>
int     *ft_range(int start, int end)
{
    int size ;
    if(start > end)
    {
        size = start - end + 1;
    }
    else
    {
        size = end - start + 1;
    }
    int *arr = malloc(sizeof(int) *(size));
    if(!arr)
    {
        return NULL;
    }
    int i = 0;
    if(start <= end)
    {
    while(start <= end)
    {
        arr[i] = start;
        i++;
        start++;
    }
    }
    else
    {
    while(start >= end)
    {
        arr[i] = start;
        i++;
        start--;
    }  
    }
    return arr;
}