/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:55:45 by srosu             #+#    #+#             */
/*   Updated: 2026/02/12 15:58:32 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb *= ft_recursive_power(nb / (nb / n), power - 1);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 5));
	return 0;
}
*/
