#include <unistd.h>
int ft_dob(char *str,char c,int len)
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
int ft_chack(char *str,char c)
{
    int i =0;
    while(str[i])
    {
        if(str[i] == c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
void inter(char *s1,char *s2)
{
    int i = 0;
    int j = 0;
    while(s1[i])
    {
        if(ft_dob(s1,s1[i],i) && ft_chack(s2,s1[i]))
        {
            write(1 , &s1[i] ,1);
        }
        i++;
    }
}
int main(int argc ,char **argv)
{
    if(argc == 3)
    {
        inter(argv[1],argv[2]);
    }
    write(1 , "\n" ,1);
    return 0;
}