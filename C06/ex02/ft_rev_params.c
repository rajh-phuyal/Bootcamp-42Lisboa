/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:12:55 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/24 14:14:56 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		index;
	char	*current_arr;

	while (argc > 1)
	{
		current_arr = argv[argc - 1];
		index = 0;
		while (current_arr[index])
		{
			ft_putchar(current_arr[index]);
			index++;
		}
		ft_putchar('\n');
		argc--;
	}
}
