/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:14:56 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/17 22:53:55 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*str_copy;

	str_copy = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
	}
	return (str_copy);
}

/*int main(void)
{
	char	first[] = "ABCD";
	char	second[] = "AbCdEfgt";
	char	third[] = "aB554gF.,';";

	printf("%s \n", ft_strlowcase(first));
	printf("%s \n", ft_strlowcase(second));
	printf("%s \n", ft_strlowcase(third));
}*/