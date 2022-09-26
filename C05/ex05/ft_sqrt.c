/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:40:16 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/26 14:17:41 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	divider;
	int	result;

	if (nb == 1)
		return (1);
	divider = 1;
	result = nb;
	while (result >= divider)
	{
		result = nb / divider;
		divider++;
	}
	if (result * result != nb)
		return (0);
	return (result);
}

/*int	main(void)
{
	printf("%i\n", ft_sqrt(16));
	return (0);
}*/
