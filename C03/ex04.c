//#include <stdio.h>
#include <unistd.h>
char *ft_strstr(char *str, char *to_find)
{
    if (!*to_find)
    return str;
 while(*str != '\0')
 {
    char *start = str;
    char *temp_find = to_find;
    if(*str == *to_find)
    {
        while(*temp_find != '\0' &&  *temp_find == *start )
        {
            temp_find++;
            start++;
        }
        if(*temp_find == '\0')
        {
            return str;
        }
    }
    str++;
 }
 return NULL;
}
/*int main()
{
    char array[] = "HI I AM BILAL TARAKI I AM A MORO";
    char find[] = "BILAL";
    char *result = ft_strstr(array, find);
    
    if (result) {
        printf("Found substring: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}
*/