/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 01:45:04 by srosu             #+#    #+#             */
/*   Updated: 2026/02/24 03:27:36 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;
	int		size;

	i = 0;
	size = ft_strlen(str) + 1;
	dest = malloc(size * sizeof(*dest));
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = malloc((ac + 1) * sizeof(*tab));
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
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

int		main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return 0;
}
*/
