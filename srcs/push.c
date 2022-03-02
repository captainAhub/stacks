/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <bleon-ba@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:09:40 by bleon-ba          #+#    #+#             */
/*   Updated: 2022/03/02 11:09:49 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_deque *stack[2])
{
	void	*ptr;

	if (stack[0]->size > 0)
	{
		ptr = stack[0]->tail->content;
		deque_pop_stern(stack[1], NULL);
		deque_push_stern(stack[0], ptr);
	}
}

void	pb(t_deque *stack[2])
{
	void	*ptr;

	if (stack[0]->size > 0)
	{
		ptr = stack[0]->tail->content;
		deque_pop_stern(stack[0], NULL);
		deque_push_stern(stack[1], ptr);
	}
}

void	ra(t_deque *stack[2])
{
	void	*ptr;

	if (stack[0]->size == 0)
		return ;
	ptr = stack[0]->tail->content;
	deque_pop_stern(stack[0], NULL);
	deque_push_bow(stack[0], ptr);
}

void	rb(t_deque *stack[2])
{
	void	*ptr;

	if (stack[1]->size == 0)
		return ;
	ptr = stack[1]->tail->content;
	deque_pop_stern(stack[1], NULL);
	deque_push_bow(stack[1], ptr);
}
