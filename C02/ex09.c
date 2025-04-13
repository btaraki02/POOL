#include <stdio.h>
#include <unistd.h>
char *ft_strcapitalize(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] <= 'A' && str[i] >= 'Z')
        {
            str[i] +=32;
        }
        i++;
    }
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == ' ')
        {
            if(str[i] <= 'z' && str[i] >= 'a')
            {
            str[i + 1] -=32;
            }
        }
        i++;
    }
    return (str);
}
int main()
{
    char array[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(array);
    printf("%s\n",array);
}