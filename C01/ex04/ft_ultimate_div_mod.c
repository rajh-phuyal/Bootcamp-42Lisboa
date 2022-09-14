/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 22:15:15 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/13 22:22:49 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	copy_a;
	int	copy_b;

	copy_a = *a;
	copy_b = *b;
	*a = copy_a / copy_b;
	*b = copy_a % copy_b;
}
