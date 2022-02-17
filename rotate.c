#include "push_swap.h"

void	ra(t_nums *a)
{
	int	aux;
	int	i;

	i = 0;
	aux = a->array[0];
	while (i < a->len - 1)
	{
		a->array[i] = a->array[i + 1];
		i++;
	}
	a->array[i] = aux;
	write(1, "ra\n", 3);
}

void	rb(t_nums *b)
{
	/*int	aux;
	int	i;

	i = 0;
	aux = b->array[0];
	while (i < b->len - 1)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	b->array[i] = aux;*/
	ra(b);
	write(1, "rb\n", 3);
}

void	rr(t_nums *a, t_nums *b)
{
	/*int	i;
	int	aux;

	i = 0;
	aux = a->array[0];
	while (i < a->len - 1)
	{
		a->array[i] = a->array[i + 1];
		i++;
	}
	a->array[i] = aux;
	i = 0;
	aux = b->array[0];
	while (i < b->len - 1)
	{
		b->array[i] = b->array[i + 1];
		i++;
	}
	b->array[i] = aux;*/
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
