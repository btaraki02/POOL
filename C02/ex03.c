#include <unistd.h>
//#include <stdio.h>
int ft_str_is_numeric(char *str)
{
    if(*str == '\0')
    {
        return 1;
    }
    while(*str != '\0')
    {
        if(!(*str <= 57 && *str >= 48))
        {
            return 0;
        }
        str++;
}
    return 1;
}
   /* int main()
{
    char array[] = "2004";
    int n = ft_str_is_numeric(array);
    if(n != 0)
    {
        printf("it's good\n");
    }
    else
    {
        printf("it's not good\n");
    }
    return 0;
}*/