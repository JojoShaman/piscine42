/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:56:55 by srosu             #+#    #+#             */
/*   Updated: 2026/02/10 14:52:11 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int		main(void)
{
	char	s[1];
	printf("%d\n", ft_str_is_lowercase("abcd7"));
	printf("%d\n", ft_str_is_lowercase("abcde"));
	printf("%d\n", ft_str_is_lowercase("aBcde"));
	printf("%d\n", ft_str_is_lowercase(s));
	return 0;
}
*/
