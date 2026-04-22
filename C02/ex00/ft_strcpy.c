/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:00:46 by srosu             #+#    #+#             */
/*   Updated: 2026/02/10 20:51:56 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s[] = "Hello 42!";
	char dest[20];

	ft_strcpy(dest, s);
	for (int i = 0; s[i]; i++)
		write(1, &dest[i], 1);
	return 0; 
}
*/
