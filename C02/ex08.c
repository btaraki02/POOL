#include <unistd.h>
//#include <stdio.h>
char *ft_strlowcase(char *str)
{
    while(*str != '\0')
    {
        if(*str <= 122 && *str >= 97)
        {
            *str +=32;
        }
        str++;
    }
    return (str);
}
/*int main()
{
    char array[] = "HI AM BILA, kjhv";
    ft_strlowcase(array);
    printf("%s\n",array);
}*/