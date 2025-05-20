#include <unistd.h>
int ft_str_is_alpha(char *str)
{
    if(!*str)
    {
        return 1;
    }
    while(*str)
    {
        if(!(*str <= 122 && *str >= 65))
        {
            return 0;
        }
        str++;
}
    return 1;

}