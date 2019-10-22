/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:11:35 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/24 13:45:31 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrot_ab(t_list **stack, char c)
{
	t_list		*top;
	t_list		*end;
	t_list		*tmp;

	top = *stack;
	end = *stack;
	if (ft_lstlen(*stack) <= 1)
		return ;
	while (end->next->next != NULL)
	{
		end = end->next;
	}
	tmp = end;
	end = end->next;
	tmp->next = NULL;
	end->next = top;
	*stack = end;
	if (c == 'c')
		return ;
	else if (c == 'a')
		ft_putendl("rra");
	else if (c == 'b')
		ft_putendl("rrb");
}

void	rrrot_ab(t_list **stacka, t_list **stackb, char w)
{
	w = 'c';
	rrot_ab(stacka, w);
	rrot_ab(stackb, w);
	if (w == 'a' || w == 'b')
		ft_putendl("rrr");
	else if (w == 'c')
		return ;
}
