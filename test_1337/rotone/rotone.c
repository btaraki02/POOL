#include <unistd.h>
void ulstr(char *str)
{
    int i = 0;
    char c;
    while(str[i])
    {
        c = str[i];
        if((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'y' ))
        {
            c += 1;
            write(1 , &c ,1);
        }
        else if( c == 'z')
        {
            write(1 , "a" ,1);
        }
        else if(c == 'Z')
        {
            write(1 , "A" ,1);
        }
        else
        {
            write(1 , &c ,1);
        }
        i++;
    }
}
int main(int argc , char **argv)
{
    if(argc == 2)
    {
        ulstr(argv[1]);
    }
    write(1 , "\n" ,1);
    return 0;
}