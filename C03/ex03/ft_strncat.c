/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:43:26 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/20 16:16:25 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_copy;
	unsigned int	i;

	i = 0;
	dest_copy = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (dest_copy);
}
