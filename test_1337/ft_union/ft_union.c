#include <unistd.h>
int dobl(char *str,char c,int len)
{
    int i = 0;
    while(i < len)
    {
        if(str[i] == c)
        {
            return 0; 
        }
        i++;
    }
    return 1;

}
void ft_union(char *a,char *b)
{
    int i = 0;
    int j = 0;
    while(a[i])
    {
        if(dobl(a,a[i],i))
        {
            write(1 , &a[i] ,1);
        }
        i++;
    }
    while(b[j])
    {
        i = 0;
        while(a[i] && a[i] != b[j]) i++;
        if(!a[i] && (dobl(b,b[j],j)))
        {
            write(1 , &b[j] ,1);
        }
        j++;
    }

}
int main(int argc,char **argv)
{
    if(argc == 3)
    {
        ft_union(argv[1],argv[2]);
    }
    write(1 , "\n" ,1);
    return 0;
}