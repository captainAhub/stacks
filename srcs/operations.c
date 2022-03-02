/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <bleon-ba@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:21:04 by bleon-ba          #+#    #+#             */
/*   Updated: 2022/03/02 11:21:06 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_init(t_deque *stack, int *array, int size)
{
	int	c;

	c = -1;
	while (++c < size)
		deque_push_bow(stack, array + c);
}

void	operation_assigned(void *ptr, t_deque stack[2])
{
	char	*str;

	str = ptr;
	if (!ft_strncmp(str, "sa", 3))
		sa(stack);
	if (!ft_strncmp(str, "sb", 3))
		sb(stack);
	if (!ft_strncmp(str, "ra", 3))
		ra(stack);
	if (!ft_strncmp(str, "rb", 3))
		rb(stack);
	if (!ft_strncmp(str, "pa", 3))
		pa(stack);
	if (!ft_strncmp(str, "pb", 3))
		pb(stack);
	if (!ft_strncmp(str, "ss", 3))
		ss(stack);
	if (!ft_strncmp(str, "rr", 3))
		rr(stack);
	if (!ft_strncmp(str, "rra", 4))
		rra(stack);
	if (!ft_strncmp(str, "rrb", 4))
		rrb(stack);
	if (!ft_strncmp(str, "rrr", 4))
		rrr(stack);
}
