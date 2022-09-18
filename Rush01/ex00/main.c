#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check_if_solvable(char *str);
int	make_views_arr(char *str);

int	input_not_weird(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		if ((*str >= '1' && *str <= '4') || *str == 32)
		{
			str++;
			length++;
		}
		else
			return (0);
	}
	if (length != 31)
		return (0);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	char	**views[4];
	if (argc == 2)
	{
		if (input_not_weird(argv[1]))
		{
			if (check_if_solvable(argv[1]))
				views = make_views_arr(argv[1]);
				free(views);
				printf("Yes its solvable, But not today!\n");
		}
		else
		{
			printf("Error! \n");
		}
	}
	else
	{
		printf("Error! \n");
	}
}
