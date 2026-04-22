/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:36:22 by srosu             #+#    #+#             */
/*   Updated: 2026/02/05 07:51:53 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
/*
int		main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
