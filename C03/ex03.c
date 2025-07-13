char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    while(dest[i]) i++;
    int j = 0;
    while(src[j] && j < nb)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[j + i] = '\0';
    return dest;
}