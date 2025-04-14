#include <unistd.h>
//#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
    char *start = dest;
    while(*dest != '\0')
    {
        dest++;
    }
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (start);
}
/*int main()
{
    char array[100] = "HI I AM BILAL ";
    char skl[50] = "TARAKI";
    ft_strcat(array, skl);
    printf("%s\n",array);
}*/