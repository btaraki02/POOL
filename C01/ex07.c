#include <unistd.h>
void ft_rev_int_tab(int *tab, int size)
{
    int j = size - 1;
    int i = 0;
    while(i < size / 2 )
    {
        int swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }
}