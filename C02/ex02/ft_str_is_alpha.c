/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 21:58:57 by srosu             #+#    #+#             */
/*   Updated: 2026/02/10 14:51:23 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_vide[1];

	printf("%d\n", ft_str_is_alpha("aBc"));
	printf("%d\n", ft_str_is_alpha("abc**"));
	printf("%d\n", ft_str_is_alpha("abc"));
	printf("%d\n", ft_str_is_alpha("abcghij[`aBCZ"));
	printf("%d\n", ft_str_is_alpha(str_vide));
	return 0;
}
*/
