int     ft_atoi(const char *str)
{
    int nigativ = 1;
    int result = 0;
        while(*str == 32 ||(*str >= 9 && *str <= 13))
        {
            str++;
        }
        if(*str == '-' || *str == '+')
        {
            if(*str == '-')
            {
                nigativ = !nigativ;
            }
            str++;
        }
        while(*str <= '9' && *str >= '0')
        {
            result = result * 10 + (*str - '0');
            str++;
        }
    if(!nigativ)
    {
        result = -result;
    }
    return result;
}