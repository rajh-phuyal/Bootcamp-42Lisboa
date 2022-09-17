/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:56:35 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/17 22:42:41 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_copy;

	dest_copy = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_copy);
}

/*int	main(void)
{
	char	dest[] = {"here"};
	char	src[] = {"copy"};

	printf("dest = %s", ft_strcpy(dest, src));
	printf(" | src = %s", src);
}*/
