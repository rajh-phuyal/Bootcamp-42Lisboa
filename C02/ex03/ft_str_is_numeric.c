/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:06:05 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/17 22:47:32 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			str++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	first[] = "12345";
	char	second[] = "1234ab";
	char	third[] = "";

	printf("%i", ft_str_is_numeric(first)); 
	printf("%i", ft_str_is_numeric(second));
	printf("%i", ft_str_is_numeric(third));
}*/
