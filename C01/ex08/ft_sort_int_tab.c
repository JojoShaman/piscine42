/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:24:39 by srosu             #+#    #+#             */
/*   Updated: 2026/02/06 11:00:42 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int		main(void)
{
	int		tab[] = {12, 7, 45, 2, 29, 42, 30};
	int		size = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, size);
	for	(int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	return 0;
}
*/
