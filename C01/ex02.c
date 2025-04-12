#include <unistd.h>
//#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}
/*int main()
{
    int a = 9;
    int *p1 = &a;
    int b = 234;
    int *p2 = &b;
    ft_swap(p1,p2);
    printf("this is new a  = %d\n",a);
    printf("this is new b = %d\n",b);
}*/