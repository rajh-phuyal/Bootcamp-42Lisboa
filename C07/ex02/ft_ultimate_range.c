/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:59:57 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/28 00:56:53 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
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
	return (l);
}
