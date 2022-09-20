/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:50:03 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/20 16:19:13 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (-1);
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (-1);
	else if (*s2 == '\0' && *s1 != '\0')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("------------My output ----------------\n");
	printf("%d", ft_strcmp("Hallo", "Hello"));
	printf("\n%d", ft_strcmp("raj", "rajh"));
	printf("\n%d", ft_strcmp("rajh", "raj"));
	printf("\n%d", ft_strcmp("\200", "\0"));
	printf("\n%d", ft_strcmp("rajh", "rajh"));
	printf("\n%d\n", ft_strcmp("\n", "\n"));
	printf("------------Func output ----------------\n");
	printf("%d", strcmp("Hallo", "Hello"));
	printf("\n%d", strcmp("raj", "rajh"));
	printf("\n%d", strcmp("rajh", "raj"));
	printf("\n%d", strcmp("\200", "\0"));
	printf("\n%d", strcmp("rajh", "rajh"));
	printf("\n%d\n", strcmp("\n", "\n"));
}*/