/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:55:11 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/26 18:19:25 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	divider;

	if (nb <= 1)
		return (0);
	else
	{
		divider = 2;
		while (divider < nb)
		{
			if (nb / divider * divider != nb)
				divider++;
			else
				return (0);
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	int	inc;

	if (ft_is_prime(nb))
		return (nb);
	else
	{
		inc = 1;
		while (inc < 2147483647 - nb)
		{
			if (ft_is_prime(nb + inc))
				return (nb + inc);
			else
				inc++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("With 0 = %i\n", ft_find_next_prime(0));
	printf("With 1 = %i\n", ft_find_next_prime(1));
	printf("With 5 = %i\n", ft_find_next_prime(5));
	printf("With 12 = %i\n", ft_find_next_prime(12));
	printf("With 47 = %i\n", ft_find_next_prime(47));
	printf("With %i = %i\n", INT_MIN, ft_find_next_prime(INT_MIN));
	printf("With %i = %i\n", INT_MAX, ft_find_next_prime(INT_MAX));
}*/