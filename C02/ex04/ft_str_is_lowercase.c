/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:45:35 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 15:53:05 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{ 
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	char	first[] = "abcd";
	char	second[] = "Abdg";
	char	third[] = "";

	printf("%i", ft_str_is_lowercase(first));
	printf("%i", ft_str_is_lowercase(second));
	printf("%i", ft_str_is_lowercase(third));
}*/
