#include <unistd.h>
int main(int argc , char **argv)
{
    if(argc != 2)
    {
        write(1 , "\n" ,1);
        return 0;
    }

    int  i = 0;
    while(argv[1][i])
    {
        if(argv[1][i] != 32 && argv[1][i] != '\t')
            break;
        i++;
    }
    if(!argv[1][i])
    {
        write(1 ,"\n",1);
        return 0;
    }
    i = 0;
    while(argv[1][i])
        i++;
    int j = i - 1;
    while(j >= 0 && (argv[1][j] == 32 || argv[1][j] == '\t'))
        j--;
    int k = j;
    while(k >= 0 && argv[1][k] != 32 && argv[1][k] != '\t')
        k--;
    k++;
    while(k <= j)
    {
        write(1 , &argv[1][k] ,1);
        k++;
    }
    write(1 , "\n" ,1);
}
