#include <unistd.h>
int main(int argc,char **argv)
{
    if(argc < 2)
    {
        write(1 , "\n" ,1 );
        return 0;
    }
    int j = argc - 1;
    int i = 0;
    while(argv[j][i] != '\0')
    {
        write(1 , &argv[j][i] , 1);
        i++;
    }
    write(1 , "\n" , 1);
    return 0;
}