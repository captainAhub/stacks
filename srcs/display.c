/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <bleon-ba@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:03:36 by bleon-ba          #+#    #+#             */
/*   Updated: 2022/03/02 14:15:50 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	display_num_width(int num)
{
	int	c[2];

	c[0] = 1;
	if (num < 0)
		c[0]++;
	c[1] = num;
	while (c[1] > 9 || c[1] < -9)
	{
		c[0]++;
		c[1] /= 10;
	}
	c[0] = 11 - c[0];
	while(c[0]--)
		ft_putchar_fd(' ', 1);
	ft_putnbr_fd(num, 1);
}

static void	sub(int c[3], t_double_list *cur[2], char *message, t_deque *stack[2])
{
	c[0] = ft_max(stack[0]->size, stack[1]->size);
	c[2] = stack[0]->size + stack[1]->size - c[0];
	ft_putendl_fd(message, 1);
	while (c[2]-- > 0)
	{
		ft_putendl_fd("", 1);
	}
	c[0] = stack[0]->tail;
	c[1] = stack[1]->tail;
}


void	display_stacks(t_deque *stack[2], char *message)
{
	int				c[3];
	t_double_list	*cur[2];

	sub(c, cur, message, stack)
	while (--c[0] >= 0)
	{
		if (c[0] < stack[0]->size)
		{
			display_num_width(*((int*)cur[0]->content));
			cur[0] = cur[0]->last;
		}
		else
			ft_putstr_fd("           ", 1);
		ft_putstr_fd("     ", 1);
		if (ct[0] < stack[1]->size)
		{
			display_num_width(*((int *)cur[1]->content));
			cur[1] = cur[1]->last;
		}
		ft_putendl_fd("", 1);
	}
	ft_putendl_fd("________a   ________b", 1);
	ft_putendl_fd("---------------------", 1);
}
