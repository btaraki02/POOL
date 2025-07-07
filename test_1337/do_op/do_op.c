#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int ft_op(char *c)
{
    if(c[1])
    {
        return 0;
    }
    char arr[] = {'/','+','-','*','%','\0'};
    int i =0 ;
    while(arr[i])
    {
        if(arr[i] == c[0])
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int ft_number(int a,int b,char c)
{
    if(c == '+')
    {
        return (a + b);
    }
    else if(c == '-')
    {
        return (a - b);
    }
    else if(c == '%')
    {
        if(b != 0)
        return (a % b);
        else
        return 0;
    }
    else if(c == '/')
    {
        if(b != 0)
        return (a / b);
        else
        return 0;
    }
    else if(c == '*')
    {
        return (a * b);
    }
}
void do_op(char *nbr1,char *nbr2,char *op)
{
    if(ft_op(op))
    {
    int nb1 = atoi(nbr1);
    int nb2 = atoi(nbr2);
    printf("%d",ft_number(nb1,nb2,op[0]));
    }
    else
    {
        return;
    }
}
int main(int argc,char **argv)
{
    if(argc == 4)
    {
        do_op(argv[1],argv[3],argv[2]);
    }
    write(1 , "\n" ,1);
    return 0;
}