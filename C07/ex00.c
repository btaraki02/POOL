#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char *s1)
{
    int i = 0;
    while(s1[i] != '\0')
    {
        i++;
    }
    return i;
}
char *ft_strdup(char *src)
{
    char *dest = (char*)malloc(sizeof(char)*(ft_strlen(src) + 1));
    //1 -> '\0';}
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main()
{
    char str[] = "bilal";
    char *p = ft_strdup(str);
    char *temp = p;
    while(*temp != '\0')
    {
        printf("%c",*temp);
        temp++;
    }
    printf("\n");
    free(p);
}