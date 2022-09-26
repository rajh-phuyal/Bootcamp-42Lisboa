/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:32:34 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/25 19:32:54 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void    ft_putstr(char *str);
int ft_check_if_dict(int argc, char **argv);

void ft_read(int argc, char **argv, char *fname)
{
    FILE    *filename;
    char buffer[100];
    int i;
   
    filename = fopen(fname, "r+");
    if (filename == NULL)
    {
        write(1, "Dict Error\n", 11);
    }
    else
    {
        while (argv[1][i])
        {
            while (!feof(filename))
            {
                fread(buffer, 100, 2, filename);
                ft_putstr(buffer);
                i++;
            }
        }
        fclose(filename);
    }
}

void ft_function(int argc, char **argv)
{
    char    fname[] = "numbers.dict";

    if (ft_check_if_dict(argc, argv))
    {
        ft_read(argc, argv, argv[2]);
    }
    else
    {
        ft_read(argc, argv, fname);
    }
}

void ft_check_args(int argc, char **argv)
{
    int i;

    i = 0;
    while (argv[1][i])
    {
        if  (argv[1][i] < 47 && argv[1][i] > 58)
        {
            write(1, "Error\n", 6);
        }
        else
        {
            ft_function(argc, argv);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2 && argc != 3)
    {
        ft_check_args(argc, argv);
    }
}

