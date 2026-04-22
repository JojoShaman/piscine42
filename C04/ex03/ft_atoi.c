/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 22:03:10 by srosu             #+#    #+#             */
/*   Updated: 2026/02/16 17:52:55 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		parity;

	i = 0;
	nb = 0;
	parity = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			parity++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (!(parity % 2))
		return (nb);
	return (-nb);
}
/*
#include <stdlib.h>
#include <stdio.h>
int		main(void)
{
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
	return 0;
}
*/
