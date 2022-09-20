/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:12:13 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/20 01:17:35 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_lenght(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str)
		lenght++;
	return (lenght);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				t_lenght;
	char			*dest_copy;
	unsigned int	i;

	i = 0;
	dest_copy = dest;
	t_lenght = get_lenght(dest) + get_lenght(src);
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < size - 1)
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (t_lenght);
}

int main (void)
{
	char src[] = "Born to code";
    char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}	