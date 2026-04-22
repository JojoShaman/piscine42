/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:33:43 by srosu             #+#    #+#             */
/*   Updated: 2026/02/05 18:14:49 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int		main(void)
{
	int		a = 42;
	int		b = 4;

	printf("before div/mod:\na = %d\nb = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("after div/mod:\na = %d\nb = %d\n", a, b);
	return 0;
}
*/
