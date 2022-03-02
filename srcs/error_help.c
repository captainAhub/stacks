#include "../push_swap.h"

int	minus_chek(char **argv, int i, int j)
{
	if (argv[i][j] == '-')
	{
		if (argv[i][j + 1] < '0' || argv[i][j + 1] > '9')
			return (1);
		if (j != 0 && argv[i][j - 1] != ' ')
			return (1);
	}
	return (0);
}

void	error_message(void)
{
	write(1, "Error\n", 6);
	return (0);
}
