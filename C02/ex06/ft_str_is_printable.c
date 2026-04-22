/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:35:30 by srosu             #+#    #+#             */
/*   Updated: 2026/02/10 12:47:17 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 31 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int		main(void)
{
	char 	c = 1;

	printf("%d\n", ft_str_is_printable("djdj+-*"));
	printf("%d\n", ft_str_is_printable(&c));
	return 0;
}
*/
