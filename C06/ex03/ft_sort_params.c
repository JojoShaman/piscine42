/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:52:38 by srosu             #+#    #+#             */
/*   Updated: 2026/02/19 13:03:00 by srosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_compare(char **str, char **str1)
{
	char		*a;
	char		*b;

	a = *str;
	b = *str1;
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_swap(char **str, char **str1)
{
	char	*temp;

	temp = *str;
	*str = *str1;
	*str1 = temp;
}

void	ft_print_param(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		swapped;

	if (argc < 2)
		return (0);
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_compare(&argv[i], &argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				swapped = 1;
			}
			i++;
		}
	}
	ft_print_param(argv);
	return (0);
}
