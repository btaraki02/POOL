#include <unistd.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    while((s1[i] != '\0' || s2[i] != '\0') && i < n )
    {
        if(s1[i] != s2[i])
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++;
    }
    return 0;
}