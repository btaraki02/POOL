#include <unistd.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while(*dest && i < n )
    {
        src[i] = dest[i];
        i++;
    }
    src[i] ='\0';
    return (src);
}