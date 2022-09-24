/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:41:17 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/24 14:11:58 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	index_arr;
	int	index_argv;

	index_argv = 1;
	while (index_argv < argc)
	{
		index_arr = 0;
		while (argv[index_argv][index_arr])
		{
			ft_putchar(argv[index_argv][index_arr]);
			index_arr++;
		}
		ft_putchar('\n');
		index_argv++;
	}
}
