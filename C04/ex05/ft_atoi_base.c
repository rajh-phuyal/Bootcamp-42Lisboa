/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:21:47 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/25 22:55:27 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	check;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45 || (base[i] <= 32))
			return (0);
		check = i + 1;
		while (base[check])
		{
			if (base[i] == base[check])
				return (0);
			check++;
		}
		i++;
	}
	return (i);
}

int	scan_str(char *str)
{
	int	nminus;

	nminus = 0;
	while (*str)
	{
		if (*str == 45)
			nminus += 1;
		str++;
	}
	return (nminus);
}

int	get_index(char *base, char nbr)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == nbr)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nminus;
	int	result;
	int	index;
	int	base_len;

	result = 0;
	base_len = check_base(base);
	if (!base_len)
		return (0);
	nminus = scan_str(str);
	while ((*str && *str <= 32 && *str >= 0) || (*str == 43 || *str == 45))
		str++;
	while (*str)
	{
		index = get_index(base, *str);
		if (index != -1)
			result = result * base_len + index;
		else
			break ;
		str++;
	}
	if (nminus % 2 != 0)
		result *= -1;
	return (result);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi_base(" \n\t\r --+-+-+---+rajh1234", "rajh"));
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
}*/