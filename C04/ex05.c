#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}

int doublechar(char *str)
{
    int i = 0;
    int j;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j])
                return 1;
            j++;
        }
        i++;
    }
    return 0;
}

int is_valid_base(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == '-' || str[i] == '+' || str[i] <= 32 || str[i] > 126)
            return 1;
        i++;
    }
    if (i < 2)
        return 1;
    return doublechar(str);
}

int parse_sign(char **str)
{
    int sign = 1;

    while (**str == ' ' || (**str >= 9 && **str <= 13))
        (*str)++;

    while (**str == '+' || **str == '-')
    {
        if (**str == '-')
            sign *= -1;
        (*str)++;
    }

    return sign;
}

int checkchar(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int ft_find_base(char *str, char *base)
{
    while (*str)
    {
        if (!checkchar(*str, base))
            return 1;
        str++;
    }
    return 0;
}

int ft_poi(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return ft_poi(a, b - 1) * a;
}

int index_in_base(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1;
}

int meat_funic(char *str, char *base, int basevalue, int p)
{
    int i = index_in_base(*str, base);
    if (i == -1)
        return 0;

    if (p == 0)
        return i;
    else
        return meat_funic(str + 1, base, basevalue, p - 1) + (i * ft_poi(basevalue, p));
}

int ft_atoi_base(char *str, char *base)
{
    if (is_valid_base(base))
        return 0;

    int sign = parse_sign(&str);
    int basevalue = ft_strlen(base);

    char *start = str;
    while (*str && checkchar(*str, base))
        str++;

    int len = str - start;
    if (len == 0)
        return 0;

    return meat_funic(start, base, basevalue, len - 1) * sign;
}

int main()
{
    char *base = "0123456789ABCDEF";
    char *str = "  -1A";
    printf("%d\n", ft_atoi_base(str, base));  // يجب أن تطبع -26
    return 0;
}
