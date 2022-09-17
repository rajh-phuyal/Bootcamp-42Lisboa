/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:55:30 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/17 22:50:08 by rphuyal          ###   ########.fr       */
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
	char	second[] = "\n";
	char	third[] = "asf34qfas][./,!$$^4~~VCSETUWERGfbdsfbhetwyetQAg2658674734";

	printf("%i", ft_str_is_printable(first));
	printf("%i", ft_str_is_printable(second));
	printf("%i", ft_str_is_printable(third));
}*/