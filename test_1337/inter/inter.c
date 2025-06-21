#include <unistd.h>
int ft_kayna(char *str , char c , int i)
{
    int j = 0;
    while(j < i)
    {
        if(str[j] == c)
        {
            return 0;
        }
        j++;
    }
    return 1;
}
int ft_dobl(char *str , char c)
{
    int i = 0;
    while(str[i])
    {
        if(c == str[i])
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
    while(s1[i])
    {
        if((ft_kayna(s1,s1[i],i) && ft_dobl(s2,s1[i])))
        {
            write(1 , &s1[i] ,1);
        }
        i++;
    }

}
int main(int argc , char **argv)
{
    if(argc == 3)
    {
        inter(argv[1],argv[2]);
    }
    write(1 , "\n" ,1);
    return 0;
}