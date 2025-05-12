#include <unistd.h>

int ft_number(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 1);
    else if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 1);
    else
        return 1;
}

void ft_put(char c, int n)
{
    while (n-- > 0)
        write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            ft_put(argv[1][i], ft_number(argv[1][i]));
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}