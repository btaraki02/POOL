#include <stddef.h>
char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    if (!to_find) //! this is a !!;
    {
        return str;
    }
    int j = 0;
    int k;
    while (str[i])
    {
        j = 0;
        k = 0;
        while (str[i + k] == to_find[j] && str[i + k] && to_find[j])
        {
            k++;
            j++;
        }
        if (!to_find[j])
        {
            return (str + i);
        }
        i++;
    }
    return NULL;
}
#include <stdio.h>
int main()
{
    char arr[] = "bilal ta to tkjwelfjn ninja";
    char str[] = "1337";
    printf("%s\n", ft_strstr(arr, str));
}