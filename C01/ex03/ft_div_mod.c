/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:19:41 by srosu             #+#    #+#             */
/*   Updated: 2026/02/05 16:52:23 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int		main(void)
{
	int		a = 42;
	int		b = 4;
	int		div;
	int		mod;
	
	printf("a = %d\nb = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d and the rest is %d\n", a, b, div, mod);
}
*/
