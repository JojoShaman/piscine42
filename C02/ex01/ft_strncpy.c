/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:54:07 by srosu             #+#    #+#             */
/*   Updated: 2026/02/09 19:09:54 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int		main(void)
{
	char src[] = "Hello World";
	char dest[20];
	ft_strncpy(dest, src, 4);
	printf("moi: %s\n", dest);
	strncpy(dest, src, 4);
	printf("fonction: %s", dest);

	return 0;
}
*/
