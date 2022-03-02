/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <bleon-ba@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:13:09 by bleon-ba          #+#    #+#             */
/*   Updated: 2022/03/02 11:13:12 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_deque *stack[2])
{
	ra(stack);
	rb(stack);
}

void	rra(t_deque *stack[2])
{
	void	*ptr;

	if (stack[0]->size == 0)
		return ;
	ptr = stack[0]->head->content;
	deque_pop_bow(stack[0], NULL);
	deque_push_stern(stack[0], ptr);
}

void	rrb(t_deque *stack[2])
{
	void	*ptr;

	if (stack[1]->size == 0)
		return ;
	ptr = stack[1]->head->content;
	deque_pop_bow(stack[1], NULL);
	deque_push_stern(stack[1], ptr);
}

void	rrr(t_deque *stack[2])
{
	rra(stack);
	rrb(stack);
}
