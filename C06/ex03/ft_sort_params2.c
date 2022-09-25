/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:20:30 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/25 00:45:39 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **curr, char **new_pos)
{
	char	*temp;

	temp = *curr;
	*curr = *new_pos;
	*new_pos = temp;
}

int	is_str_smaller(char	*str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 < *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	ft_strcmp2(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 && *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	*sort_params(int index_argv, int argc, char **argv)
{
	char	*pos_smallest;
	char	index_arrs;

	while (index_argv < argc)
	{
		pos_smallest = argv[index_argv];
		printf("Pos smallest = %p\n", pos_smallest);
		index_arrs = index_argv;
		while (index_arrs < argc)
		{
			//is_str_smaller(argv[index_arrs], pos_smallest) ft_strcmp(pos_smallest, argv[index_arrs]) > 0
			if (ft_strcmp(pos_smallest, argv[index_arrs]) > 0)
				pos_smallest = argv[index_arrs];
			index_arrs++;
		}
		//printf("%p | %p\n", argv[index_argv], pos_smallest);
		ft_swap(&argv[index_argv], &pos_smallest);
		index_argv++;
	}
}

int	main(int argc, char **argv)
{
	int	index_argv;

	index_argv = 1;
	sort_params(index_argv, argc, argv);
	while (index_argv < argc)
	{
		ft_putstr(argv[index_argv]);
		ft_putchar('\n');
		index_argv++;
	}
}
