/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:07:47 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/18 00:05:29 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int get_j(int n)
{
	int end_num;
	int j;

	j = 10 - n;
	end_num = j;
	while( j < 9)
	{
		end_num = end_num * 10;
		j++;
		end_num = end_num + j;
	}
	return (end_num);
}

void	print_number(int number)
{
	if (number > 0 || number <= 9)
	{
		ft_putchar(number + 48);
	}
	else
	{
		ft_putchar(number / 10 + 48);
		print_number(number % 10);
	}
}
void	check_zeros(int i, int num)
{
	int counter;
	int	num_zeros;
	int	i_copy;

	i_copy = i;
	counter = 0;
	while (i > 0)
	{
		i = i / 10;
		counter++;
	}
	num_zeros = num - counter;
	while(num_zeros > 0)
	{
		ft_putchar('0');
		num_zeros--;
	}
	print_number(i_copy);
}

void	ft_print_comb2(int n)
{
	int	i;
	int	j;

	i = 1;
	j = get_j(n);
	printf("%i", j);
	while(i <= j)
	{
		check_zeros(i, n);
		if (i < j)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		if (i % 10 == '9')
		{
			i = i + 3;
		}
		else
		{
			i++;
		}
	}
}

int main(void)
{
	ft_print_comb2(0);
}