/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:18:22 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 21:28:52 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_pos_left(char *pos)
{
	pos = pos - 1;
	if ((*pos >= 65 && *pos <= 90) || (*pos >= 97 && *pos <= 122))
		return (0);
	if (*pos >= 48 && *pos <= 57)
		return (0);
	return (1);
}

int	check_if_alpha(char *pos)
{
	if ((*pos >= 65 && *pos <= 90) || (*pos >= 97 && *pos <= 122))
		return (1);
	else
		return (0);
}

void	ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*str_copy;

	str_copy = str;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if (check_if_alpha(str))
		{
			if (check_pos_left(str))
			{
				*str -= 32;
			}
		}
		str++;
	}
	return (str_copy);
}

/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quaRante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/