/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 08:07:17 by srosu             #+#    #+#             */
/*   Updated: 2026/02/23 22:15:14 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
int		main(void)
{
	ft_putnbr(42);
	write(1, "\n", 2);
	ft_putnbr(-42);
	write(1, "\n", 2);
	ft_putnbr(2147483647);
	write(1, "\n", 2);
	ft_putnbr(-2147483648);
	write(1, "\n", 2);
	return 0;
}
*/
