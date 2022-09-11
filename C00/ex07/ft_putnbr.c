/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:18:47 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/11 16:55:23 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	get_num_length(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		x = num % 10;
		num = nb / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	char	x;
	int	i;

	i = 0;
	while (num > 0)
	{
		x = num % 10;
		write(1, )
		num = nb % 10;
		i++;
	}
	return (i);
}

int	main(void)
{
	ft_putnbr(42);
}