/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 01:50:03 by srosu             #+#    #+#             */
/*   Updated: 2026/02/17 09:41:09 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	if (nb == 0)
		return (dest);
	while (dest[i])
		i++;
	j = 0;
	while (j < nb && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int		main(void)
{
	char	dest[20] = "Hello";
	char	dest2[20] = "Hello";
	char	dest3[20] = "Hello";
	char	dest4[20] = "Hello";
	char 	dest5[20];
	char	dest6[20];

	printf("%s\n", ft_strncat(dest, "World", 2));
	printf("%s\n", strncat(dest2, "World", 2));

	printf("%s\n", ft_strncat(dest3, "World", 0));
	printf("%s\n", strncat(dest4, "World", 0));

	printf("%s\n", ft_strncat(dest5, "World", 4));
	printf("%s\n", strncat(dest6, "World", 4));
	return 0;
}
*/
