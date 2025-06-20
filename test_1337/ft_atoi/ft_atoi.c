#include <unistd.h>
int	ft_atoi(const char *str)
{
    int i = 0;
    char c;
    int resu = 0;
    int sing = 1;
    while(str[i] == 32 || str[i] == '\t') i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sing = -sing; 
        }
        i++;
    }
        while(str[i] >= '0' && str[i] <= '9')
        {
            resu = resu * 10 + (str[i] - '0');
            i++;
        }
    return (resu * sing);
}