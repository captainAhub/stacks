#include "push_swap.h"

void	pa(t_nums *a, t_nums *b)
{
	int	aux;
	int	i;

	aux = b->array[0];
	i = a->len;
	while (i > 0)
	{
		a->array[i] = a->array[i - 1];
		i--;
	}
	a->array[0] = aux;
	while (i <= b->len)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	a->len++;
	b->len--;
	write(1, "pa\n", 3);
}

void	pb(t_nums *a, t_nums *b)
{
	/*int	i;

	i = b->len;
	while (i > 0)
	{
		b->array[i] = b->array[i - 1];
		i--;
	}
	b->array[0] = a->array[0];
	while (i <= a->len)
	{
		a->array[i] = a->array[i + 1];
		i++;
	}
	a->len--;
	b->len++;*/
	pa(b, a);
	write(1, "pb\n", 3);
}
