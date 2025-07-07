#include <unistd.h>
#include <stdlib.h>
int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

void ft_putnbr(int n)
{
    char c;

    if (n > 9)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int is_prime(int n)
{
    if (n < 2)
        return 0;
    int i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void add_prime_sum(char *str)
{
    int i = ft_atoi(str);
    int sum = 0;
    int j = 2;

    while (j <= i)
    {
        if (is_prime(j))
            sum += j;
        j++;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "0\n", 2);
        return 0;
    }
    add_prime_sum(argv[1]);
    exit(0);
}
