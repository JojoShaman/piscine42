/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:44:39 by srosu             #+#    #+#             */
/*   Updated: 2026/02/12 13:48:03 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//n! = n * (n - 1) * (n - 2) * ....2 * 1
//nb = nb * (func(nb - 1))

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
    printf("%d\n", ft_recursive_factorial(-5));
    return 0;
}
*/
