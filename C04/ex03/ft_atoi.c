/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:46:39 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/21 01:25:59 by rphuyal          ###   ########.fr       */
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

	result = 0;
	nminus = scan_str(str);
	while (*str && !(*str >= 48 && *str <= 57))
		str++;
	while (*str && (*str >= 48 && *str <= 57))
	{
		result = (*str - 48) + (result * 10);
		str++;
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