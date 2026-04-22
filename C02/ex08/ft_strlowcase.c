/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:47:27 by srosu             #+#    #+#             */
/*   Updated: 2026/02/10 12:42:46 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int		main(void)
{
	char	s1[] = "HELLO42";
	char	s2[] = "hElLo42";

	printf("%s\n", ft_strlowcase(s1));
	printf("%s\n", ft_strlowcase(s2));
	return 0;
}
*/
