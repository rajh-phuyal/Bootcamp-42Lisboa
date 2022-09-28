/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:46:39 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/27 00:22:28 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_atoi(char *str)
{
	int	nminus;
	int	result;
	int	l;

	result = 0;
	nminus = scan_str(str);
	l = 0;
	while ((str[l] >= 9 && str[l] <= 13) || \
	str[l] == 32 || (str[l] == '-' || str[l] == '+'))
		l++;
	while (str[l] && str[l] >= 48 && str[l] <= 57)
	{
		result = (str[l] - 48) + (result * 10);
		l++;
	}
	if (nminus % 2 != 0)
		result *= -1;
	return (result);
}

/*int	main(void)
{
	char	str[] = " \t\v--+--+---12345abcd";
	printf("%i", ft_atoi(str));
}*/