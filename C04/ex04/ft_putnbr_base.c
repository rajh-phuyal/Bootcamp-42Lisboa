/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 02:12:09 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/22 13:30:43 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	map_to_base(char *base, int remainders[], int pos)
{
	while (pos >= 0)
	{
		ft_putchar(base[remainders[pos]]);
		pos--;
	}
}

void	get_remainders(char *base, int nbr, int divider)
{
	int	quotent;
	int	remainders[256];
	int	i;

	i = 0;
	quotent = nbr;
	while (quotent > 0)
	{
		remainders[i] = quotent % divider;
		quotent = quotent / divider;
		i++;
	}
	map_to_base(base, remainders, i - 1);
}

int	check_base(char *base)
{
	int	i;
	int	check;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45 || base[i] <= 32)
			return (0);
		check = i + 1;
		while (base[check])
		{
			if (base[i] == base[check])
				return (0);
			check++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;

	base_len = 0;
	if (check_base(base))
	{
		while (base[base_len])
			base_len++;
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
			get_remainders(base, nbr, base_len);
		}
		else
			get_remainders(base, nbr, base_len);
	}
}

/*int	main(void)
{
	ft_putnbr_base(420, "0123456789");
	printf("\n");
	ft_putnbr_base(69, "01");
	printf("\n");
	ft_putnbr_base(100, "poneyvif");
	printf("\n");
	ft_putnbr_base(333, "phuyal");
	printf("\n");
}*/