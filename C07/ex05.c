#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int ft_test(char c)
{
    if (c > 32 && c <= 126)
    {
        return 1;
    }
    return 0;
}
int count_words(char *s)
{
    int i = 0;
    int len_s = 0;
    if (ft_test(s[0]))
    {
        len_s++;
    }
    while (s[i])
    {
        if (s[i] == 32 && ft_test(s[i + 1]))
        {
            len_s++;
        }
        i++;
    }
    return len_s;
}
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] && ft_test(str[i]))
    {
        i++;
    }
    return i;
}
int ft_strcpy(char *d, char *s)
{
    int i = 0;
    while (s[i] && ft_test(s[i]))
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return i;
}
char **ft_split(char *str)
{
    int i = 0;
    int len_w;
    int words = count_words(str);
    int j = 0;
    char **arr = malloc(sizeof(char *) * (words + 1));
    while (i < words)
    {
        len_w = ft_strlen(&str[j]) + 1;
        arr[i] = malloc(sizeof(char) * len_w);
        j += ft_strcpy(arr[i], &str[j]);
        j++;
        i++;
    }
    return arr;
}
int main()
{
    char arr[] = "hi bilal taraki ldf /. oij  kljds";
    char **argv = ft_split(arr);
    int i = 0;
    int j = 0;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    i = 0;
    while (argv[i])
    {
        free(argv[i]);
        i++;
    }
    free(argv);
}
