#include <unistd.h>
#include <stdio.h>
int ft_n9z(char *str)
{
    int i = 0;
        while(str[i] == 32 || (str[i] <= 13 && str[i] >= 9)) i++;
        return i;
}
int zed(char *str)
{
    int i = 0;
    while(str[i] != 32 && !(str[i] <= 13 && str[i] >= 9)) i++;
    return i;
}
int ft_count_words(char *str)
{
    if(!str)
    {
        return 0;
    }
    int i = 0;
    int len = 0;
    while(str[i])
    {
        if(zed(&str[i]))
        {
            len++;
        }
        i+= zed(&str[i]);
        i +=ft_n9z(&str[i]);
    }

    return len;
}
int main(int argc,char **argv)
{
    int i= 0;
    if(argc == 2)
    {
        i = ft_count_words(argv[1]);
    }
    printf("%d\n" ,i);
}