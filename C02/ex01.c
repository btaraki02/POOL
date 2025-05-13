#include <unistd.h>
//#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while(*dest != '\0' && i < n )
    {
        src[i] = dest[i];
        i++;
    }
    src[i] ='\0';
    return (src);
}
/*int main()
{
    char array[] = "HI I AM BILAL TARAKI";
    int size = sizeof(array)/ sizeof(array[0]);
    unsigned int n = 10;
    char array2[20] ;
    ft_strncpy(array,array2,n);
    printf("%s\n",array2);
    return 0;
}*/