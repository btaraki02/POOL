#include <unistd.h>
//#include <stdio.h>

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
/*int main()
{
    int tab[] = {1,2,3,4,5};
    int size = sizeof(tab) / sizeof(tab[0]);
    ft_rev_int_tab(tab,size);
    int i = 0;
    while(i < size)
    {
        printf("%d ",tab[i]);
        i++;
    }

}*/