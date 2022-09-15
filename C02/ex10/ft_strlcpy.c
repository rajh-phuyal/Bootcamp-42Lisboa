/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:30:07 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 22:07:11 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lenght;

	lenght = 0;
	if (size != 0)
	{
		while (*src != '\0')
		{
			if (lenght < size - 1)
				*dest = *src;
				dest++;
				*dest = '\0';
			src++;
			lenght++;
		}
	}
	return (lenght);
}

/*int	main()
{
	char src[] = "copy this, not this";
	char dest[] = "copy it here";
	unsigned int	size;

	size = 10;
	printf("%d | %s", ft_strlcpy(dest, src, size), dest);
}*/
