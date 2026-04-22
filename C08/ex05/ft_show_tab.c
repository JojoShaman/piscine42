/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 03:28:04 by srosu             #+#    #+#             */
/*   Updated: 2026/02/24 20:14:21 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 1;
	while (par[i].str)
	{
		write(1, "size of string :", 16);
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		write(1, "the string :", 12);
		ft_putstr(par[i].str);
		ft_putchar('\n');
		write(1, "the copy :", 10);
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
/*
int		main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return 0;
}
*/
