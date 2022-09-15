/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:55:30 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 16:11:45 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
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
	char	third[] = "\n";

	printf("%i", ft_str_is_printable(first));
	printf("%i", ft_str_is_printable(second));
	printf("%i", ft_str_is_printable(third));
}*/