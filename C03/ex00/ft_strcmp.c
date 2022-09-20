/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:50:03 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/20 20:03:11 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	inc;

	inc = 0;
	while ((s1[inc] == s2[inc]) && (s1[inc] != '\0') && (s2[inc] != '\0'))
		inc++;
	return (s1[inc] - s2[inc]);
}
