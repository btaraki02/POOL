#include <unistd.h>
int is_sep(char c)
{
    if(c == 32 || c == '\t')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void str_capitalizer(char *str)
{
    int i = 0;
    char c;
    int wor = 0;
    while(str[i])
    {
        c = str[i];
        if(c <= 'Z' && c >= 'A')
        {
            c +=32;
        }
        if( (i == 0||(!is_sep(str[i]) && is_sep(str[i - 1]))))//!
        {
            if(c <= 'z' &&c >= 'a')
            {
                c -=32;
            }
        }
        write(1 , &c ,1);
        i++;
    }
}
int main(int argc,char **argv)
{
    int i = 1;
    if(argc > 1)
    {
        while(i < argc)
        {

        str_capitalizer(argv[i]);
        write(1  , "\n" ,1);
        i++;
        }
    }
    else
    {
        write(1 , "\n" ,1);
    }
    return 0;
}