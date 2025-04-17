/*#include <stdio.h>
#include <unistd.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0' && i < size -1)
    {
        *dest = src[i];
        dest++;
        i++;
    }
    while(src[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char dest[30] = " HI";
    char src[] = " BILAL TARAKI ";
    unsigned  int i = ft_strlcat(dest,src,30);
    printf("%s\n",dest);
    printf("%d\n",i);
}*/