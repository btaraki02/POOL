#include <unistd.h>
#include <stdio.h>
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
void ft_unique_chars(char *str)
{
    int i = 0;
    while(str[i])
    {

            if(dobl(str,str[i],i))
            {
                write(1 , &str[i] ,1);
            }
        i++;
    }

}
int main(int argc , char **argv)
{
    if(argc == 2)
    {
        ft_unique_chars(argv[1]);
    }
    write(1 , "\n" ,1);
    return 0;
}
