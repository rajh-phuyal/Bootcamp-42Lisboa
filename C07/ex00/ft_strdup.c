/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:33:48 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/26 20:37:26 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		l;
	char	*dub;

	l = 0;
	while (src[l])
		l++;
	dub = (char *)malloc(l * sizeof(char));
	l = 0;
	while (src[l])
	{
		dub[l] = src[l];
		l++;
	}
	dub[l] = '\0';
	return (dub);
}

/*int	main(void)
{
	char	str[] = "Copy this";
	char	*dub;

	dub = ft_strdup(str);
	printf("Copy recieved : %s\n", dub);
	free(dub);
}*/