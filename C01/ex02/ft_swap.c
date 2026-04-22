/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:11:42 by srosu             #+#    #+#             */
/*   Updated: 2026/02/05 16:52:05 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int		main(void)
{
	int		a;
	int		b;
	a = 24;
	b = 42;
	
	printf("Avant switch: a = %d & b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Apres switch: a = %d & b = %d\n", a, b);
	return 0;
}
*/
