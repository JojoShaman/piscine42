/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 20:07:34 by srosu             #+#    #+#             */
/*   Updated: 2026/02/17 21:03:37 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(37));
	return (0);
}
*/
