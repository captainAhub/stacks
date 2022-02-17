#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>


void	sa(t_nums *a)
{
	int	aux;

	aux = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = aux;
	write(1, "sa\n", 3);
}

void	sb(t_nums *b)
{
	/*int	aux;

	aux = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = aux;*/
	sa(b);
	write(1, "sb\n", 3);
}

void	ss(t_nums *a, t_nums *b)
{
	/*int	aux;

	aux = a->array[0];
	a->array[0] = a->array[1];
	a->array[1] = aux;
	aux = b->array[0];
	b->array[0] = b->array[1];
	b->array[1] = aux;*/
	sa(&a);
	sb(&b);
	write(1, "ss\n", 3);
}

/*int main(void)
{
	int i;
	t_nums a;
	int	array[3] = {1, 2, 3};
	char c;
	int len;

	i = 0;
	len = 3;
	//a->len = len;
	a.array = array;
	sb(&a);
	while (i < 3){
		c = (a.array[i] + '0');
		write(1, &c, 1);
		i++;
	}
	return 0;
}
*/