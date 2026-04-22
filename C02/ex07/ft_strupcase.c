/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:18:14 by srosu             #+#    #+#             */
/*   Updated: 2026/02/10 12:43:38 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int		main(void)
{
	char	s1[] = "hello42";
	char	s2[] = "hElLo42";
	printf("%s\n", ft_strupcase(s1));
	printf("%s\n", ft_strupcase(s2));
	return 0;
}
*/
