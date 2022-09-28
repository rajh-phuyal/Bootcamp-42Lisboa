/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:09:16 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/27 14:43:31 by rphuyal          ###   ########.fr       */
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
		while (divider <= (nb / divider))
		{
			if (nb / divider * divider != nb)
				divider++;
			else
				return (0);
		}
		return (1);
	}
}

/*int	main(void)
{
	printf("With 0 = %i\n", ft_is_prime(0));
	printf("With 1 = %i\n", ft_is_prime(1));
	printf("With 5 = %i\n", ft_is_prime(5));
	printf("With 12 = %i\n", ft_is_prime(12));
	printf("With 49 = %i\n", ft_is_prime(49));
	printf("With %i = %i\n", INT_MIN, ft_is_prime(INT_MIN));
	printf("With %i = %i\n", INT_MAX, ft_is_prime(INT_MAX));
}*/