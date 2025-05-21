#include <unistd.h>
int main(int argc,char **argv)
{
    if(argc != 2)
    {
        write(1 , "\n" ,1);
        return 0;
    }
    int i = 0;
    while(argv[1][i])
    {
        i++;
    }
    int k = i -1;
    while(k >= 0)
    {
        write(1 , &argv[1][k] ,1);
        k--;
    }
    write(1 , "\n" ,1);
    return 0;
}