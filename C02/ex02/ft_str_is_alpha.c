/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:35:55 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 13:08:21 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	first[] = "abcd";
	char	second[] = "abcd1";
	char	third[] = "";

	printf("%i", ft_str_is_alpha(first));
	printf("%i", ft_str_is_alpha(second));
	printf("%i", ft_str_is_alpha(third));
}*/
