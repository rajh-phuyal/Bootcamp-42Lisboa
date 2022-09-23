#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

char    *sort_string(char *str)
{
    char    smallest;
    char    *pos_smallest;
    char    temp;
    char    *sec_iter;
    char    *str_copy;

    str_copy = str;
    while (*str)
    {
        smallest = *str;
        pos_smallest = str;
        sec_iter = str;
        while (*sec_iter)
        {
            if (*sec_iter < smallest)
            {
                smallest = *sec_iter;
                pos_smallest = sec_iter;
            }
            sec_iter++;
        }
        temp = *str;
        *str = *pos_smallest;
        *pos_smallest = temp;
        str++;
    }
    return (str_copy);
}

int main(int argc, char **argv)
{
    int index_argv;

    index_argv = 1;
    while (index_argv < argc)
    {
        ft_putstr(sort_string(argv[index_argv]));
        ft_putchar('\n');
        index_argv++;
    }
}