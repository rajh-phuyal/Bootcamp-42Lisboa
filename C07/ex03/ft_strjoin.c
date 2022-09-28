/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 01:59:27 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/28 16:30:59 by rphuyal          ###   ########.fr       */
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

void	put_in_malloc(char *our_str, char *str, char *sep, int inc, int size)
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
	if (inc != size - 2)
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
		return (our_str);
	while (i < size - 1)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += 1;
	our_str = (char *)malloc(l * sizeof(char));
	i = 0;
	while (i < size - 1)
	{
		put_in_malloc(our_str, strs[i], sep, i, size);
		i++;
	}
	return (our_str);
}

int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "466564";
		offset++;
	}
	res_str = ft_strjoin(3, strs, "----");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}