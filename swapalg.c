/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapalg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:07:45 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/24 13:32:34 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nswap(t_list *stack, char c)
{
	int *a;
	int *b;
	int temp;

	if (stack == NULL)
		return ;
	a = &stack->data;
	if (stack->next == NULL)
		return ;
	b = &stack->next->data;
	temp = *a;
	*a = *b;
	*b = temp;
	if (c == 'c')
		return ;
	c == 'a' ? ft_putendl("sa") : ft_putendl("sb");
}

void	small_to_top(t_list **top, t_list **b, int loc, int len)
{
	int mid;

	mid = half_mid(len);
	if (loc == 1 && len != 2)
	{
		push_b(top, b, 'b');
		return ;
	}
	else if ((*top)->data > (*top)->next->data && len == 2)
	{
		nswap(*top, 'a');
		return ;
	}
	else if (loc <= mid)
	{
		while (1 < loc--)
			rot(top, 'a');
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			rrot_ab(top, 'a');
	}
	push_b(top, b, 'b');
}

void	ab_swap(t_list *stack_a, t_list *stack_b, char c)
{
	c = 'c';
	nswap(stack_a, c);
	nswap(stack_b, c);
	if (c == 'a' || c == 'b')
		ft_putendl("ss");
	else if (c == 'c')
		return ;
}

void	big_to_top(t_list **top, t_list **b, int loc, int len)
{
	int mid;

	if (!*b && !*top)
		return ;
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len / 2) + 1;
	if (loc == 1 && len != 2)
		return ;
	else if (*b == NULL)
		return ;
	else if (loc <= mid)
	{
		while (1 < loc--)
			rot(b, 'b');
	}
	else if (loc > mid)
	{
		while (len-- >= loc)
			rrot_ab(b, 'b');
	}
}
