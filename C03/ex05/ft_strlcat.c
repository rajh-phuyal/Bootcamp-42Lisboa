/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:12:13 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/20 15:01:57 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_lenght(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;
	return (lenght);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	while (*dest != '\0')
	{
		dest_len++;
		dest++;
	}
	src_len = get_lenght(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (*src != '\0' && i < size - dest_len - 1)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
