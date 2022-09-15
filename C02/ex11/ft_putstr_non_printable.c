/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:07:51 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 23:38:33 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_number(int number)
{
	if (number => 0 && number <= 9)
		ft_putchar(number + 48);
	else
	{
		ft_putchar("0123456789abcdef"[number / 16]);
		print_hex_number(number % 10);
	}
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
			print_hex_number(*str);
		}
		str++;
	}
}

int	main(void)
{
	char	str[] = "Hey \r this is a test!";
	ft_putstr_non_printable(str);
}