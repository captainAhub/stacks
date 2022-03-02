/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <bleon-ba@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:58:15 by bleon-ba          #+#    #+#             */
/*   Updated: 2022/03/02 10:58:19 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft.h"

void	sa(t_deque *stack[2])
{
	void	*ptr[2];

	if (stack[0]->size > 1)
	{
		ptr[0] = stack[0]->tail->content;
		deque_pop_stern(stack[0], NULL);
		ptr[1] = stack[0]->tail->content;
		deque_pop_stern(stack[0], NULL);
		deque_push_stern(stack[0], ptr[0]);
		deque_push_stern(stack[0], ptr[1]);
	}
}

void	sb(t_deque *stack[2])
{
	void	*ptr[2];

	if (stack[1]->size > 1)
	{
		ptr[0] = stack[1]->tail->content;
		deque_pop_stern(stack[1], NULL);
		ptr[1] = stack[0]->tail->content;
		deque_pop_stern(stack[1], NULL);
		deque_push_stern(stack[1], ptr[0]);
		deque_push_stern(stack[1], ptr[1]);
	}
}

void	ss(t_deque *stack[2])
{
	sa(stack);
	sb(stack);
}
