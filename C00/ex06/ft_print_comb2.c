/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:20:44 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/10 10:51:34 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char a, char b, char i, char j)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &space, 1);
	write(1, &i, 1);
	write(1, &j, 1);
	if (a != 57 && b != 58)
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	i;
	char	j;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 56)
		{
			i = 48;
			while (i <= 57)
			{
				j = i + 1;
				while (j <= 57)
				{
					print_number(a, b, i, j);
					j++;
				}
				i++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
