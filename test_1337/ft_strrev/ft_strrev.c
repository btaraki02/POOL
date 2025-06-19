char    *ft_strrev(char *str)
{
    int i = 0;
    char swap;
    while(str[i]) i++;
    i--;
    int j= 0;
    while(j < i)
    {
        swap= str[i];
        str[i] = str[j];
        str[j] =swap;
        i--;
        j++;
    }
    return str;
}