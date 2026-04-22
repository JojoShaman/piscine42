/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 20:36:46 by srosu             #+#    #+#             */
/*   Updated: 2026/02/17 15:51:16 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <math.h>
int		main(void)
{
	int num1 = 2;	
	//double num2 = 2;
	printf("%d\n", ft_sqrt(num1));
	//printf("%f\n", sqrt(num2));
	return 0;
}
*/
