/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:30:15 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/14 17:25:01 by rphuyal          ###   ########.fr       */
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
			ft_putchar('/');
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (width == x)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('\\');
		}
		else if (width == x)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar('*');
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
	
	if (x <= 0 || y <= 0)
		return;
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
