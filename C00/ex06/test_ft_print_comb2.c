/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_print_comb2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:49:51 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/11 13:43:43 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_if_end(int i)
{
	if (i < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	prefix_i(int i, int j)
{
	ft_putchar('0');
	ft_putchar(i + 48);
	ft_putchar(' ');
	ft_putchar(j / 10 + 48);
	ft_putchar(j % 10 + 48);
	check_if_end(i);
}

void	prefix_j(int i, int j)
{
	ft_putchar('0');
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
	ft_putchar(' ');
	ft_putchar('0');
	ft_putchar(j + 48);
	check_if_end(i);
}

void	check_if_single(int i, int j)
{
	char	a;
	char	b;

	if (i <= 9 && j <= 9)
	{
		ft_putchar('0');
		ft_putchar(i + 48);
		ft_putchar(' ');
		ft_putchar('0');
		ft_putchar(j + 48);
		check_if_end(i);
	}
	else if (i <= 9 && j > 9)
	{
		a = i + 48;
		b = j + 48;
		prefix_num(a, b, i);
	}
	else if (j <= 9 && i > 9)
	{
		a = i + 48;
		b = j + 48;
		prefix_num(a, b, i);
	}
	else
	{
		ft_putchar(i / 10 + 48);
		ft_putchar(i % 10 + 48);
		ft_putchar(' ');
		ft_putchar(j / 10 + 48);
		ft_putchar(j % 10 + 48);
		check_if_end(i);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		if (i != 0)
		{
			j = i + 1;
		}
		while (j <= 99)
		{
			check_if_single(i, j);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
