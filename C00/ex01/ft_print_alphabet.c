/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:39:20 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/08 15:41:59 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	i;

	i = 97;
	while (i <= 122)
	{	
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
