#include <unistd.h>
void ft_swap(char *a , char *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}