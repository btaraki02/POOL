#include <unistd.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
    int size;
    int i = 0;

    if(start <= end)
        size = end - start +1;
    else
        size = start - end + 1;
    int *arr = malloc(sizeof(int) * size );
    if(!arr)
        return NULL;
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