/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:50:14 by srosu             #+#    #+#             */
/*   Updated: 2026/02/24 03:57:49 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t		i;

	i = 0;
	if (i < size)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
	}
	return (i);
}
/*
#include <stdio.h>
int		main(void)
{
	char	dest1[64];
	printf("%u\n", ft_strlcpy(dest1, "Hello, World!", 5));
	return 0;
}
*/
