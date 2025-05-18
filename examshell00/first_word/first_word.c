#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1 , "\n" ,1);
        return 0;
    }
        int h = 1;
        int i = 0;
        while(argv[h][i] == '\t' || argv[h][i] == ' ')
        {
            i++;
        }
        while(argv[h][i] && argv[h][i] != '\t' && argv[h][i] != ' ')
        {
            write(1 , &argv[h][i] , 1);
            i++;
        }
        write(1 , "\n" , 1);
}