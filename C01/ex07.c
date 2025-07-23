#include <unistd.h>
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int j = size - 1;
    int i = 0;
    while(i < j )
    {
        int swap = tab[i];
        tab[i] = tab[j];
        tab[j] = swap;
        i++;
        j--;
    }
}
int main()
{
    int i = 0;
    int arr[] = {1,2,7,3,4,5,8,9};
    ft_rev_int_tab(arr,8);
    while(i < 9)
    {
        printf("%d\n",arr[i]);
            i++;
    }
}