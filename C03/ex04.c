#include <unistd.h>
char *ft_strstr(char *str, char *to_find)
{
    int i =0;
    int len;
    if (!to_find[0])
    return str;
 while(str[i])
 {
    len = 0;
    while(to_find[len] && str[i + len] && to_find[len] == str[i + len])
    {
        len++;
    }
    if(!to_find[len])
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
