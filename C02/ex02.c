//#include <stdio.h>
#include <unistd.h>
int ft_str_is_alpha(char *str)
{
    if(*str == '\0')
    {
        return 1;
    }
    while(*str != '\0')
    {
        if(!(*str <= 122 && *str >= 65))
        {
            return 0;
        }
        str++;
}
    return 1;

}
/*int main()
{
    char array[] = "HI BILAL";
    int n = ft_str_is_alpha(array);
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