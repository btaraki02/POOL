#include <unistd.h>
//#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *start = dest;
    while(*dest )
    {
        dest++;
    }
    while(*src && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    *dest = '\0';
    return (start);
}
/*int main()
{
    char array[100] = "HI I AM BILAL ";
    char skl[50] = "TARAKI I AM A MORO";
    unsigned int nb = 9;
    ft_strncat(array, skl,nb);
    printf("%s\n",array);
}*/