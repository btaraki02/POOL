#include <unistd.h>
int ft_strcmp(char *s1 , char *s2)
{
    while(*s1 == *s2 && *s1 != '\0')
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);//er
}

void ft_swap(char **s1 , char **s2)
{
    char *swap;
    swap = *s1;
    *s1 = *s2;
    *s2 = swap;
}
void ft_sort(int argc, char *argv[])//er
{
    int i,j;
    int len = argc -1;
    while(len > 0)
    {
         i = 0;
         j = 1;
        while(j < len)
        {
            if(ft_strcmp(argv[i],argv[j]) > 0)
            {
                ft_swap(&argv[i] , &argv[j]);
            }
            j++;
            i++;
        }
        len--;
    }
}

void ft_puts(char *argv)
{
    while(*argv)
    {
        write(1 , argv++, 1);
    }
    write(1 , "\n" ,1);
}

int main(int argc, char *argv[])
{
    ft_sort(argc -1,argv + 1);//a.out ;}
    ++argv;//a.out
    while(*argv)
    {
        ft_puts(*argv);
        argv++;//er
    }

}