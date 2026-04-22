/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:34:59 by srosu             #+#    #+#             */
/*   Updated: 2026/02/12 14:54:56 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int		n;

	n = nb;
	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || power == 0)
		return (1);
	while (power > 1)
	{
		nb *= n;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_iterative_power(8, 0));
	return 0;
}
*/
