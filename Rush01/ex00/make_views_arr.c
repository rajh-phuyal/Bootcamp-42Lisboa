/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_views_arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:16:27 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/18 14:22:10 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	make_views_arr(char *str)
{
	int		i;
	char	**views[4];

	i = 0;
	while (i < 4)
	{
		views[i] = (char** )malloc(4);
		i++;
	}

	return(views);
}