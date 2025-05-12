/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <btaraki@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:12:59 by exam              #+#    #+#             */
/*   Updated: 2025/05/12 13:21:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_search_and_replace(char *str, char c, char d)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			str[i] = d;
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		ft_search_and_replace(argv[1], argv[2][0], argv[3][0]);
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
