#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
    while(*dest != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *src = '\0';
    return (src);
}