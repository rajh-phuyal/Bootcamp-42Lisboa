/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:12:30 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/25 22:13:32 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	put_str(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		index_arrs;
	int		inc_argc;

	inc_argc = 1;
	while (inc_argc < argc - 1)
	{
		index_arrs = 1;
		while (index_arrs < argc - 1)
		{
			if (ft_strcmp(argv[index_arrs], argv[index_arrs + 1]) > 0)
			{
				ft_swap(&argv[index_arrs], &argv[index_arrs + 1]);
			}
			index_arrs++;
		}
		inc_argc++;
	}
	index_arrs = 1;
	while (index_arrs < argc)
	{
		put_str(argv[index_arrs]);
		ft_putchar('\n');
		index_arrs++;
	}
	return (0);
}
