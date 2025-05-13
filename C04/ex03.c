#include <unistd.h>
int ft_atoi(char *str)
{
    int rus =0;
    int is_negative = 0;
    while(*str == 32 || *str == '+' || *str == '-')
    {
        if(*str == '-')
        {
            is_negative = !is_negative;
        }
        str++;
    }
    while(*str <= '9' && *str >= '0')
    {
        rus = rus * 10 + (*str - '0');
        str++;
    }
    if(is_negative)
    {
       rus *= -1;
    }
    return (rus);
}