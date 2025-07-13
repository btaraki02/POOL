char ft_p(char *str)
{
    int i = 0;
    while(*(str + i))
    {
        if(*(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            *(str + i) +=32;
        }
        i++;
    }
}
char ft_up(char *str)
{
    int i = 0;
            if(*str >= 'a' && *str<= 'z')
            {
            *str -= 32;
            }
    while(*(str + i))
    {
        if(*(str + i) == '+' ||*(str + i) == '-' || *(str + i) == ' ')
        {
            if(*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
            {
            *(str + i + 1) -= 32;
            }
        }
        i++;
    }
}
char *ft_strcapitalize(char *str)
{
    ft_p(str);
    ft_up(str);
    return str;
}