#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
}
t_stock_str;
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
char *ft_strdup(char *str)
{
    int i = 0;
    int size = ft_strlen(str);
    char *cop = malloc(sizeof(char) * (size +1));
    if(!cop)
    {
        return NULL;
    }
    while(size > i)
    {
        cop[i] = str[i];
        i++;
    }
    cop[i] = '\0';
    return cop;
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tnt = malloc(sizeof(t_stock_str) * (ac + 1));
    if(!tnt)
    {
        return NULL;
    }
    int i = 0;
    while(i < ac)
    {
        tnt[i].size = ft_strlen(av[i]);
        tnt[i].str = av[i];
        tnt[i].copy = ft_strdup(av[i]);
        i++;
    }
    tnt[i].str = NULL;
    return tnt;
}