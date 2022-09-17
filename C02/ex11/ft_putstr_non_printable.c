/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:07:51 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/17 23:01:22 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[*str / 16]);
			ft_putchar("0123456789abcdef"[*str % 16]);
		}
		str++;
	}
}

/*int	main(void)
{
	char	str[] = "Hey \r this is a test 42!";
	ft_putstr_non_printable(str);
}*/