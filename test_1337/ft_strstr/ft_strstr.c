char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j ;
    if(!to_find[0])
    {
        return str;
    }
    while(str[i])
    {
        j = 0;
            while(str[i + j] && to_find[j] && to_find[j] == str[i + j])
            {
                j++;
            }
            if(!to_find[j])
            {
                return &str[i];
            }
        i++;
    }
    return NULL;
}