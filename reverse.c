#include "push_swap.h"

void	rra(t_nums *a)
{
	int	aux;
	int	i;

	i = a->len - 1;
	aux = a->array[i];
	while (i > 0)
	{
		a->array[i] = a->array[i + 1];
		i--;
	}
	a->array[i] = aux;
	write(1, "rra\n", 4);
}

void	rrb(t_nums *b)
{
	rra(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_nums *a, t_nums *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
