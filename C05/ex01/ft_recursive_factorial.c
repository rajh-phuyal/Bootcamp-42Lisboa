#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 1)
        return 1;
    else
        return nb * ft_recursive_factorial(nb - 1);
}

/*int main(int argc, char *argv[])
{
	printf("%i\n", ft_recursive_factorial(10));
	return 0;
}*/