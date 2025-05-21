#include <unistd.h>
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j ;
    while(i < size)
    {
        j = i + 1;
       while(j < size)
       {
        if(tab[i] > tab[j])
        {
            int swap = tab[i];
            tab[i] = tab[j];
            tab[j] = swap;
            
        }
        j++;
    }
    i++;
    }
}