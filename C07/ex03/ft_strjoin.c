/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 01:59:27 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/28 21:34:42 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	put_in_malloc(char *our_str, char *str, char *sep, int end)
{
	int	i;

	i = 0;
	while (our_str[i])
		i++;
	while (*str)
	{
		our_str[i] = *str;
		i++;
		str++;
	}
	if (end != -1)
	{
		while (*sep)
		{
			our_str[i] = *sep;
			i++;
			sep++;
		}
	}
	our_str[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		l;
	char	*our_str;

	i = 0;
	l = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += 1;
	our_str = (char *)malloc(l * sizeof(char));
	i = 0;
	while (i < size)
	{
		put_in_malloc(our_str, strs[i], sep, i - size);
		i++;
	}
	return (our_str);
}

/*int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 4)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(3, strs, " - ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}*/