#include <unistd.h>
int ft_atoi(char *str)
{
    int i = 0;
    int negative = 0;
    int number = 0;

    while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            negative++;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        number = number * 10 + (str[i] - '0');
        i++;
    }

    if (negative % 2 != 0)
        return -number;
    return number;
}