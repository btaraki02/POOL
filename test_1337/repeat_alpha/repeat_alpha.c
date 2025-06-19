#include <unistd.h>
void ft_print(char c ,int len)
{
    while(len--)
    {
        write(1 , &c ,1);
    }
}
void  repeat_alpha(char *str)
{
    int i = 0;
    char c;
    int len;
    while(str[i])
    {
        c  =str[i];
        if(c >= 'a' && c <= 'z')
        {
            len = c - 'a' +1;
            ft_print(c,len);
        }
        else if(c >= 'A' && c <= 'Z')
        {
            len = c - 'A' +1;
            ft_print(c,len);
        }
        else{
            write(1 , &c ,1);
        }
        i++;
    }
}
int main(int argc,char **argv)
{
    if(argc == 2)
    repeat_alpha(argv[1]);

    write(1 , "\n" ,1);
    return 0;

}