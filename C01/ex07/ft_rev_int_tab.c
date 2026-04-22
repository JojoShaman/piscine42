/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:22:42 by srosu             #+#    #+#             */
/*   Updated: 2026/02/05 18:17:54 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int		main(void)
{
	int		tab[] = {1, 2, 3, 4, 5, 6};
	int		size = sizeof(tab) / sizeof(tab[0]);

	ft_rev_int_tab(tab, size);
	
	for(int i = 0; i < size; i++)
		printf("%d", tab[i]);
	return 0;
}
*/
