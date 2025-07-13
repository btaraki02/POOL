int ft_strlen(char *s)
{
    int i = 0;
    while(s[i]) i++;
    return i;
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int  nb = ft_strlen(src);
    unsigned int  i = 0;
    if(size > 0)
    {
    while(src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
        dest[i] = '\0';
    }

    return nb;
}