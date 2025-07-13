#include <unistd.h>
#include <fcntl.h>
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1 , &str[i++] ,1);
    }
}
int main(int argc,char ** argv)
{
    int fd;
    char c;
    char arr[4096];
    if(argc < 2)
    {
        ft_putstr("File name missing.\n");
        return 1;
    }
    if(argc > 2)
    {
        ft_putstr("Too many arguments.\n");
        return 1;
    }
    fd = open(argv[1], O_RDONLY);
    if(fd < 0)
    {
        ft_putstr("Cannot read file.\n");
        return 1;
    }
    ssize_t des = read(fd , arr ,4096); // if read return -1;ssize_t Better than size_t;
    write(1 , arr, des);

    while(des > 0)
    {
        des = read(fd , arr ,4096);
        write(1 , arr, des);
    }
    close(fd);
    return 0;
    
}