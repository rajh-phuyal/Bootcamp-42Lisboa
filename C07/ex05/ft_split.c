/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:02:47 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/28 20:39:39 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putword(char **vector, char *str_ptr)
{
	while (*vector)
		vector++;
	*vector = str_ptr;
	vector++;
	*vector = '\0';
}*/

void	alloc_word(char **vector, int len, char *str)
{
	char	*new_str;
	int		index;

	index = 0;
	new_str = (char *)malloc(sizeof(char) * len);
	while (*vector)
		vector++;
	*vector = new_str;
	vector++;
	*vector = '\0';
	while (str[len] && len)
	{
		new_str[index] = str[len];
		index++;
		len++;
	}
	new_str[index] = '\0';
}

int	count_strs(char *str, char *sep)
{
	int		index_sep;
	int		count;
	int		count_chars[256];
	char	temp_vector;

	count = 0;
	temp_vector = (char **)malloc(sizeof(char *) * 100);
	while (*str)
	{
		index_sep = 0;
		if (*str == sep[index_sep])
		{
			while (sep[index_sep])
			{
				if (*str != sep[index_sep])
					break ;
				index_sep++;
				str++;
				count_chars++;
			}
		}
		count_chars++;
		if (sep[index_sep] == '\0')
		{
			count++;
			alloc_word(temp_vector, count_chars, *str);
			count_chars = 0;
		str++;
	}
	return (count + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**vector;
	int		len_strs;

	len_strs = count_strs(str, charset);
	vector = (char **)malloc(sizeof(char *) * len_strs);
	ft_putwords(vector, str, sep);
	return (vector);
}

int	main(void)
{
	char	*str = "rajh--phuyal--42--lisboa";
	char	*sep = "--";

	printf("%i\n", count_strs(str, sep));
}