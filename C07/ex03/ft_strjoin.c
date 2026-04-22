/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:31:46 by srosu             #+#    #+#             */
/*   Updated: 2026/02/23 12:58:31 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*sep_append(char *result, char *sep)
{
	int		j;

	j = 0;
	while (sep[j])
	{
		*result = sep[j];
		result++;
		j++;
	}
	return (result);
}

char	*str_append(int size, char **strs, char *sep, char *result)
{
	int		i;
	int		j;
	char	*ptr_res;

	i = 0;
	ptr_res = result;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*result = strs[i][j];
			result++;
			j++;
		}
		j = 0;
		if (i < size - 1)
		{
			result = sep_append(result, sep);
		}
		i++;
	}
	*(result) = '\0';
	return (ptr_res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;

	total_len = ft_total_size(size, strs, sep);
	result = malloc((total_len + 1) * sizeof(*result));
	if (!result)
		return (NULL);
	return (str_append(size, strs, sep, result));
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Hello", "World", "42"};
	char	*result;
	result = ft_strjoin(3, strs, "   ");
	printf("%s", result);
	return 0;
}
*/
