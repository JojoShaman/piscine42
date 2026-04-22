/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:09:44 by srosu             #+#    #+#             */
/*   Updated: 2026/02/19 19:46:23 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		size;
	int		i;

	i = 0;
	size = max - min;
	tab = malloc(size * sizeof(*tab));
	if (!tab)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>
int		main(void)
{
	int	i;
	int	*tab;
	int size;
	int max = 9;
	int min = -9;
	size = max-min;
	i = 0;
	tab = ft_range(min,max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/
