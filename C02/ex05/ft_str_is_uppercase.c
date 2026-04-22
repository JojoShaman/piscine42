/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:40:08 by srosu             #+#    #+#             */
/*   Updated: 2026/02/09 19:10:14 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 64 && str[i] < 91))
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
    char s[1];
    printf("%d\n", ft_str_is_uppercase("ABCDeFG"));
    printf("%d\n", ft_str_is_uppercase("ABCDEFG"));
    printf("%d\n", ft_str_is_uppercase(s));
    return 0;
}
*/
