/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <btaraki@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:12:59 by exam              #+#    #+#             */
/*   Updated: 2025/05/12 13:21:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *str)
{
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
            *str += 1;
        else if (*str == 'z')
            *str = 'a';
        else if (*str == 'Z')
            *str = 'A';
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
    return 0;
}