/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:41:30 by srosu             #+#    #+#             */
/*   Updated: 2026/02/09 19:08:43 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char stringvide[1];
	printf("%d\n", ft_str_is_numeric("0123456"));
	printf("%d\n", ft_str_is_numeric("01A3456"));
	printf("%d\n", ft_str_is_numeric("123"));
	printf("%d\n", ft_str_is_numeric(stringvide));
	printf("%d\n", ft_str_is_numeric("0*'3456"));
	return 0;
}
*/
