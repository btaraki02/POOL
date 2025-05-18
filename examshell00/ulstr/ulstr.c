#include <unistd.h>
void ulstr(char *str)
{
    int i = 0;
    while(str[i])
    {
            if(str[i] <= 'z' && str[i] >= 'a')
    {
        str[i] = str[i] - 32;
    }
    else if(str[i] <= 'Z' && str[i] >= 'A')
    {
        str[i] = str[i] + 32;
    }
    write(1 , &str[i]  ,1);
    i++;
    }

}
int main(int argc , char **argv)
{
    if(argc < 2)
    {
        write(1 , "\n" , 1);
        return 0;
    }
    ulstr(argv[1]);
    write(1 , "\n" ,1);
  
}