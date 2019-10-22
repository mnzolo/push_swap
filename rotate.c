/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 11:42:05 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/24 13:46:13 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rot(t_list **top, char c)
{
	t_list *p;
	t_list *t;

	if (top == NULL)
		return ;
	t = *top;
	p = *top;
	*top = p->next;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = t;
	p->next->next = NULL;
	if (c == 'c')
		return ;
	else if (c == 'a')
		ft_putendl("ra");
	else if (c == 'b')
		ft_putendl("rb");
}

void	rrot(t_list **a, t_list **b, char c)
{
	c = 'c';
	rot(a, c);
	rot(b, c);
	ft_putendl("rr");
}
