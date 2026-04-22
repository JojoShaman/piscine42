/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 21:19:51 by srosu             #+#    #+#             */
/*   Updated: 2026/02/22 14:29:33 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(**range));
	if (!*range)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
    int min = -5;
    int max = 5;
    int *range = NULL;

    printf("%d\n", ft_ultimate_range(&range, min, max));
    return 0;
}
*/
