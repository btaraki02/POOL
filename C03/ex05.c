//#include <stdio.h>
#include <unistd.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int res = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[res] != '\0')
    {
        res++;
    }
    if(size <= i)
    {
        res += size;
    }
    else
    {
        res += i;
    }
    while(src[j] != '\0' && i < size -1)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
        dest[i] = '\0';
    return res;
}
/*int main()
{
    char dest[7] = " HI";
    char src[] = " BILAL TARAKI ";
    unsigned  int i = ft_strlcat(dest,src,30);
    printf("%s\n",dest);
    printf("%d\n",i);
}*/