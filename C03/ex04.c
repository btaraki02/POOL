//#include <stdio.h>
#include <unistd.h>
char *ft_strstr(char *str, char *to_find)
{
    if(!to_find[0])
        return str;
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
