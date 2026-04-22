/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 21:12:21 by srosu             #+#    #+#             */
/*   Updated: 2026/02/18 17:55:51 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int nb)
{
	int		i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (!(check_prime(nb)))
	{
		return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}
/*
#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(16));
	printf("%d\n", ft_find_next_prime(23));
	printf("%d\n", ft_find_next_prime(30));
	printf("%d\n", ft_find_next_prime(45));
	return (0);
}
*/
