//#include <stdio.h>
#include <unistd.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int number = 0;
    while(src[number] != '\0' && number < size - 1)
    {
        dest[number] = src[number];
        number++;
    }
    if (size > 0)
    dest[number] = '\0';

    while(src[number] != '\0')
    number++;

    return (number);
}
/*int main()
{
    char array[] = "HI BILAL TARAKI WELCOME TO MY GITHUB NIGA!!";
    char dest[9];
    unsigned int size = sizeof(dest) ;
    unsigned int len = ft_strlcpy(dest,array,size);
    printf("%s\n",dest);
    printf("%u\n",len);
}*/