/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:46:40 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/14 01:01:06 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_places(int current, int smaller, int *tab)
{
	int	swap;

	swap = tab[current];
	tab[current] = tab[smaller];
	tab[smaller] = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	current_int;
	int	loop_arr;
	int	smaller;

	i = 0;
	while (i < size)
	{
		current_int = tab[i];
		loop_arr = i;
		while (loop_arr < size)
		{
			if (tab[loop_arr] <= current_int)
			{
				current_int = tab[loop_arr];
				smaller = loop_arr;
			}
			loop_arr++;
		}
		swap_places(i, smaller, tab);
		i++;
	}
}
