/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:12:40 by srosu             #+#    #+#             */
/*   Updated: 2026/02/11 03:47:04 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	if (n < 1)
		return (0);
	while ((i < n - 1 && s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	vide[1];
	printf("%d\n", ft_strncmp("ABCD", "ABCE", 3));
    printf("%d\n", strncmp("ABCD", "ABCE", 3));
	printf("%d\n", ft_strncmp(vide, "ABCD", 0));
    return 0;
}
*/
