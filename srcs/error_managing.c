#include "../push_swap.h"

void	numbers_long(t_nums *a, char *c)
{
	long	aux;
	int		len;

	if (ft_strlen(c) > 12)
		error_message();
	aux = ft_atoi(c);
	if (aux > 2147483657 || aux < -2147483658)
		error_message();
	else
	{	
		len = a->len;
		a->array[len] = (int)aux;
	}
}

void	extra_check(char **argv, int i, int j)
{
	if (argv[i][j] != '-' && argv[i][j] != ' ')
		error_message();
	else if (minus_check(argv, i, j) == 1)
		error_message();
	else if (argv[i][j] == ' ' && i != 1)
		error_message();
}

void	number_check(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				extra_check(argv, i, j);
			j++;
		}
		j = 0;
		i++;
	}
}

void	repeat_check(t_nums *a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (a->array[i])
	{
		while (i > j)
		{
			if (a->array[i] == a->array[j])
				error_message();
			j++;
		}
		j = 0;
		i++;
	}
}
