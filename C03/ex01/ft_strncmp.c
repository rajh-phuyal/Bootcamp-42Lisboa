/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:57:33 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/20 20:03:07 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int	ft_strcmp1(char *s1, char *s2)
{
	unsigned int	inc;

	inc = 0;
	while ((s1[inc] == s2[inc]) && (s1[inc] != '\0') && (s2[inc] != '\0'))
		inc++;
	return (s1[inc] - s2[inc]);
}

int	ft_strncmp2(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != '\0' && *s2 != '\0')
		{
			if (*s1 == *s2)
			{
				s1++;
				s2++;
				i++;
			}
			else
				return (-1);
		}
		else if (*s1 == '\0' && *s2 != '\0')
			return (*s1 - *s2);
		else if (*s1 != '\0' && *s2 == '\0')
			return (*s1 - *s2);
		else
			return (0);
	}
	return (0);
}

//using pointers, need to move the position of the pointer
int ft_strcmp(char *src1, char *src2)
{
    int i=0;
    while((*src1!='\0') || (*src2!='\0'))
    {
        if(*src1 > *src2)
            return 1;
        if(*src1 < *src2)
            return -1;
        src1++;
        src2++;
    }
    return 0;
}

/*int	main()
{
	unsigned int	n = 5;

	printf("------------My output ----------------\n");
	printf("%d", ft_strncmp("Hallo", "Hello", n));
	printf("\n%d", ft_strncmp("raj", "rajh", n));
	printf("\n%d", ft_strncmp("rajh", "raj", n));
	printf("\n%d", ft_strncmp("\200", "\0", n));
	printf("\n%d", ft_strncmp("", "", n));
	printf("\n%d\n", ft_strncmp("\n", "\n", n));
	printf("------------Func output ----------------\n");
	printf("%d", strncmp("Hallo", "Hello", n));
	printf("\n%d", strncmp("raj", "rajh", n));
	printf("\n%d", strncmp("rajh", "raj", n));
	printf("\n%d", strncmp("\200", "\0", n));
	printf("\n%d", strncmp("", "", n));
	printf("\n%d\n", strncmp("\n", "\n", n));
}*/