/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:33:32 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/11 17:28:56 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line_top(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1)
		{
			ft_putchar('A');
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (width == x)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
		}
		width++;
	}
}

void	print_line_bot(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1)
		{
			ft_putchar('C');
		}
		else if (width == x)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
		}
		width++;
	}
}

void	print_special(int x)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1 || width == x)
		{
			ft_putchar('B');
			if (width == x)
			{
				ft_putchar('\n');
			}
		}
		else
		{
			ft_putchar(' ');
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int	mid;

	mid = y - 2;
	print_line_top(x);
	if (mid >= 0)
	{
		while (mid > 0)
		{
			print_special(x);
			mid--;
		}
		print_line_bot(x);
	}
}
