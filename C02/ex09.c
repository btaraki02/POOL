//#include <stdio.h>
#include <unistd.h>
char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_Word_ = 1;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if(new_Word_)
            {
                str[i] -=32;
            }
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            if(!new_Word_)
            {
                str[i] +=32;
            }
        }
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
            {
                new_Word_ = 0;
            }
            else
            {
                new_Word_ = 1;
            }
            i++;
    }
    return str;
   
}
/*int main()
{
    char array[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(array);
    printf("%s\n",array);
}*/