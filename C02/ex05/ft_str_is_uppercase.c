/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:26:09 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 16:12:22 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			str++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	char	first[] = "ABCD";
	char	second[] = "Abdg";
	char	third[] = "";

	printf("%i", ft_str_is_uppercase(first));
	printf("%i", ft_str_is_uppercase(second));
	printf("%i", ft_str_is_uppercase(third));
}*/

