/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:12:57 by srosu             #+#    #+#             */
/*   Updated: 2026/02/05 18:17:19 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
int		main(void)
{
	char	*s = "Wassup 42?";

	printf("The string '%s' has %d characters", s, ft_strlen(s));
	return 0;
}
*/
