/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:50:03 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/18 13:03:04 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (1);
	}
	if (*s2 != '\0')
		return (-1);
	else
		return (0);
}

/*int	main()
{
	printf("%d", ft_strcmp("Hello", "Hello"));
	printf("\n%d", ft_strcmp("raj", "rajh"));
	printf("\n%d", ft_strcmp("rajh", "raj"));
	printf("\n%d", ft_strcmp("\200", "\0"));
	printf("\n%d", ft_strcmp("\n", "\n"));
}*/