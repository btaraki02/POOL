#include <unistd.h>
int is_spes(char c)
{
    if(c == 32 || c == '\t')
    {
        return 1;
    }
    return 0;
}
void rstr_capitalizer(char *str)
{
    int i = 0;
    char c;
    while(str[i])
    {
        c = str[i];
        if(c <= 'Z' && c >= 'A')
        {
            c += 32;
        }
        if(!is_spes(c) && is_spes(str[i + 1]) || str[i + 1] == '\0')
        {
            if(c <= 'z' && c >= 'a')
            {
                c -=32;
            }
        }
        write(1 , &c , 1);
        i++;
    }
}
int main(int argc , char **argv)
{
    int i = 1;
    if(argc > 1)
    {
        while(argv[i])
        {
            rstr_capitalizer(argv[i]);
            write(1 , "\n" ,1) ;
            i++;
        }
    }
    else
    {
    write(1 , "\n" ,1);
    }
    return 0;
}