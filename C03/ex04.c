//#include <stdio.h>
#include <unistd.h>
char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j;
    if (!to_find[0])
    return str;
 while(str[i])
 {
    j = 0;
    while(to_find[j] && str[i + j] && to_find[j] == str[i + j])
    {
        j++;
    }
    if(!to_find[j])
    {
        return (&str[i]);
    }
    i++;
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