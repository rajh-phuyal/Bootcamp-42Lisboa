/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:59:57 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/28 18:25:48 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	l;
	int	inc;
	int	*my_arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	l = max - min;
	my_arr = (int *)malloc(sizeof(int) * l);
	if (!my_arr)
	{
		*range = 0;
		return (-1);
	}
	inc = 0;
	while (inc < l)
	{
		my_arr[inc] = min + inc;
		inc++;
	}
	*range = my_arr;
	return (l);
}
