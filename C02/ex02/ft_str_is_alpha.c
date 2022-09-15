/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:35:55 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 17:42:17 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
			str++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	first[] = "abcd";
	char	second[] = "abcd1";
	char	third[] = "";

	printf("%i", ft_str_is_alpha(first));
	printf("%i", ft_str_is_alpha(second));
	printf("%i", ft_str_is_alpha(third));
}
