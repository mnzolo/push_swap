/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:47:38 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/14 14:15:30 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nswap(t_list *stack, char c)
{
	int *a;
	int *b;
	int temp;

	a = &stack->data;
	if (stack->next == NULL)
		return ;
	b = &stack->next->data;
	temp = *a;
	*a = *b;
	*b = temp;
	if (c == 'c')
		return ;
	else if (c == 'a')
	{
		ft_putendl("sa");
	}
	ft_putendl("sb");
}

void	ab_swap(t_list *stack_a, t_list *stack_b, char r)
{
	nswap(stack_a, r);
	nswap(stack_b, r);
}
