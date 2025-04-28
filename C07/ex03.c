//#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int ft_total(char **strs , char *sep , int size)
{
    int i =0;
    int total_size = 0;
    while(i < size)
    {
        total_size += ft_strlen(strs[i]);
        i++;
    }
    total_size += (size-1)* ft_strlen(sep) + 1;
    // size - 1 = number of sep ;
    // strlen(sep) = "," or "-" or " - "; ......
    // +1 = '\0';
    return total_size;

}
void ft_strj(char **strs , char *strjoi , char *sep ,int size)
{
    int k = 0;
   int  i = 0;
   int j;
    while(i < size)
    {
       j = 0;
       while(strs[i][j] != '\0')
       {
        strjoi[k++] = strs[i][j++];
       }
       if(i < size - 1)
       {
        j  = 0;
        while(sep[j] != '\0')
        {
            strjoi[k++] = sep[j++];
        }
        
       }
       i++;
    }
    strjoi[k] = '\0';
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    int total_size = ft_total(strs,sep,size);

    char *strjoi = (char *)malloc(sizeof(char) * total_size);

    if(!strjoi)
        return NULL;
    ft_strj(strs,strjoi,sep,size);
    return strjoi;

}
/*int main()
{
    char *arr[] = { "bilal taraki" ,
                    "momo ma4nincho",
                    "layla taraki"};
    char *sep = ",";
    int i = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    char *strj = ft_strjoin(size,arr,sep);
        printf("%s",strj);
        free(strj);
}*/