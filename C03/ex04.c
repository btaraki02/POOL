#include <stddef.h>
char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    if(*to_find == '\0')//!this is a !!;
    {
        return str;
    }
    int j;
    while(str[i])
    {
        j = 0;
        while(str[i + j] == to_find[j] && str[i + j] && to_find[j])
        {
            j++;
        }
        if(!to_find[j])
        {
            return &str[i];
        }
        i++;
    }
    return NULL;
}