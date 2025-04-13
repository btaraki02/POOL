#include <unistd.h>
//#include <stdio.h>
char *ft_strupcase(char *str)
{
    while(*str != '\0')
    {
        if(*str <= 122 && *str >= 97)
        {
            *str -=32;
        }
        str++;
    }
    return (str);
}
/*int main()
{
    char array[] = "hi i am bilal taraki";
    ft_strupcase(array);
    printf("%s\n",array);
}*/