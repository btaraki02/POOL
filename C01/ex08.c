#include <unistd.h>
//#include <stdio.h>
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
/*int main()
{
    int array[] = {46,4,2,67,23,670};
    int size = sizeof(array) / sizeof(array[0]);
    ft_sort_int_tab(array,size);
    int i = 0;
    while(i < size)
    {
        printf("%d ",array[i]);
        i++;
    }
    return 0;
}*/