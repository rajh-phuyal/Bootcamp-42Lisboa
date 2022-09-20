/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:37:49 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/20 15:06:58 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_this_is_it(char *start, char *to_find)
{
	while (*to_find)
	{
		if (*start == *to_find)
		{
			start++;
			to_find++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*start_sub;
	int		i;

	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			start_sub = str;
			if (is_this_is_it(start_sub, to_find))
				return (start_sub);
		}
		str++;
	}
	return (0);
}
