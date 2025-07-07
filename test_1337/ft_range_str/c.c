#include <unistd.h>
#include <stdlib.h>

char **ft_range_str(int n)
{
    char **arr = malloc(sizeof(char *) * (n + 1));
    if(!arr)
    {
        return NULL;
    }
    int i = 0;
    while(i < n)
    {
        arr[i] = malloc(2);
            if(!arr[i])
    {
        return NULL;
    }
        arr[i][0] = i + '0';
        arr[i][1] = '\0';
        i++;
    }
    arr[i] = NULL;
    return arr;
}
int main()
{
    char **str = ft_range_str(6);
    int i = 0;
    while(str[i])
    {
        write(1 , &str[i] ,1);
        i++;
    }
    int j = 0;
while (str[j])
{
    free(str[j]);
    j++;
}
free(str);

}