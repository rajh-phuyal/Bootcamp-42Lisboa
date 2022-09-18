#include <stdlib.h>

int	check_colums(char colup, char coldown)
{
	if (colup == '1' && \
	(coldown == '2' || coldown == '3' || coldown == '4'))
		return (1);
	else if (colup == '2' && (coldown == '2' || coldown == '3'))
		return (1);
	else
		return (0);
}

int	check_rows(char rowleft, char rowrigth)
{
	if (rowleft == '1' && \
	(rowleft == '2' || rowrigth == '3' || rowrigth == '4'))
		return (1);
	else if (rowleft == '2' && (rowrigth == '2' || rowrigth == '3'))
		return (1);
	else
		return (0);
}

int	check_if_solvable(char *str)
{
	int i;
	int	j;
	char	*views[4];

	i = 0;
	j = 16;
	while (i < 4)
	{
		views[i] = (char* )malloc(4);
		i++;
	}
	i = 0;
	while (str[i] == '\0')
	{
		if (check_colums(i, i+8) && check_colums(j, j+8))
		{
			i++;
			j++;
		}
		else
			return (0);
	}
	free(views[0]);
	free(views[1]);
	free(views[2]);
	free(views[3]);
	return (1);
}
