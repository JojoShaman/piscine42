/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 04:37:13 by srosu             #+#    #+#             */
/*   Updated: 2026/02/16 19:33:17 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (!(to_find[0]))
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int		main(void)
{
	char	str[19] = "Jimmy fait du vélo";
	char	str2[19] = "Jimmy fait du vélo";
	char	str3[1];
	
	printf("%s\n", ft_strstr(str, "du"));
	printf("%s\n", strstr(str2, "du"));
	printf("%s\n", ft_strstr(str2, str3));
	return 0;
}
*/
