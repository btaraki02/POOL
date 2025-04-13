#include <unistd.h>
int ft_str_is_printable(char *str)
{
    if(*str == '\0')
    {
        return 1;
    }
    while(*str != '\0')
    {
        if(!((*str <=31 && *str >= 0) || *str == 127))
        {
            return 0;
        }
        str++;
}
    return 1;
}