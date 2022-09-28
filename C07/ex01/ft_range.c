/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:50:10 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/26 20:37:15 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	l;
	int	i;
	int	*range;

	l = max - min;
	range = (int *)malloc(sizeof(int) * l);
	i = 0;
	while (i < l)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int	*range;
	int	l;

	range = ft_range(-1, 10);
	l = 0;
	while (l < 11)
	{
		printf("%i\n", range[l]);
		l++;
	}
	free(range);
}*/