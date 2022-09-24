/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:20:30 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/24 19:18:46 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char *curr, char *new_pos)
{
	char	temp;

	temp = *curr;
	*curr = *new_pos;
	*new_pos = temp;
}

char	*sort_string(char *str)
{
	char	smallest;
	char	*pos_smallest;
	char	*sec_iter;
	char	*str_copy;

	str_copy = str;
	while (*str)
	{
		smallest = *str;
		pos_smallest = str;
		sec_iter = str;
		while (*sec_iter)
		{
			if (*sec_iter < smallest)
			{
				smallest = *sec_iter;
				pos_smallest = sec_iter;
			}
			sec_iter++;
		}
		ft_swap(str, pos_smallest);
		str++;
	}
	return (str_copy);
}

int	main(int argc, char **argv)
{
	int	index_argv;

	index_argv = 1;
	while (index_argv < argc)
	{
		ft_putstr(sort_string(argv[index_argv]));
		ft_putchar('\n');
		index_argv++;
	}
}
