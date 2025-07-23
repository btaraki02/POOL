unsigned int ft_strlen(char *str)
{
    unsigned int i = 0;
    while(str[i]) i++;
    return i;
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int len_s = ft_strlen(src);
    while(dest[i] && i < size) i++;
    if(i == size)
    {
        return (size + len_s );
    }
    while(src[j] && i + j < size - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
        dest[i + j] = '\0';
    return (i + len_s);
}