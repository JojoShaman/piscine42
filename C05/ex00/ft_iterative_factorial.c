/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:32:42 by srosu             #+#    #+#             */
/*   Updated: 2026/02/12 13:55:24 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//n! = n * (n - 1) * (n - 2) * ....2 * 1
//nb = nb * (func(nb - 1))

int	ft_iterative_factorial(int nb)
{
	int		result;
	int		n;

	n = nb;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (result != n)
	{
		nb *= n - result;
		result++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
    printf("%d\n", ft_iterative_factorial(5));
    return 0;
}
*/
