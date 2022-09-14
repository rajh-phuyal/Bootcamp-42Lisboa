/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:30:21 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/13 22:45:28 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swapper;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		swapper = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swapper;
		i++;
	}
}
