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
/*int main(int argc , char **argv)
{
    int i = 0;
    t_stock_str *pool = ft_strs_to_tab(argc,argv);
        if (!pool)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    while (pool[i].str != NULL)
    {
        printf("Original string: %s\n", pool[i].str);
        printf("Copied string: %s\n", pool[i].copy);
        printf("Length: %d\n\n", pool[i].size);
        i++;
    }

    i = 0;
    while (pool[i].str != NULL)
    {
        free(pool[i].copy);
        i++;
    }
    free(pool);

    return 0;
}*/
