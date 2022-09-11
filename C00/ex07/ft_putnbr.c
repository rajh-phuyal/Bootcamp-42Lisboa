/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:18:47 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/12 00:05:32 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	reverse_number(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		i = i * 10;
		i = i + num % 10;
		num = num / 10;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	rev_num;

	rev_num = reverse_number(nb);
	while(rev_num > 0)
	{
		ft_putchar(rev_num % 10 + 48);
		rev_num = rev_num / 10;
	}
	ft_putchar('\n');
	
}

int	main(void)
{
	ft_putnbr(42224544);
}