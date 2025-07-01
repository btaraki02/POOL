#include <stdlib.h>

int ft_sep(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

int ft_words(char *str)
{
    int i = 0;
    int cunt = 0;
    int in_word = 0;

    while (str[i])
    {
        if (ft_sep(str[i]))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            cunt++;
        }
        i++;
    }
    return cunt;
}

char *ft_worddup(char *str, int len)
{
    char *word = malloc(len + 1);
    int i = 0;

    if (!word)
        return NULL;

    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return word;
}

char **ft_split(char *str)
{
    int i = 0, j = 0, start = 0, len = 0;
    int size = ft_words(str);
    char **arr = malloc(sizeof(char *) * (size + 1));

    if (!arr)
        return NULL;

    while (str[i])
    {
        while (str[i] && ft_sep(str[i]))
            i++;
        start = i;
        while (str[i] && !ft_sep(str[i]))
            i++;
        len = i - start;
        if (len > 0)
        {
            arr[j] = ft_worddup(&str[start], len);
            if (!arr[j])
            {
                return NULL;
            }
            j++;
        }
    }
    arr[j] = NULL;
    return arr;
}
