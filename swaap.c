/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:42:49 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/13 09:20:19 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *top)
{
	int tmp;
	int *a;
	int *b;

	a = &top->data;
	if (top->next == NULL)
		return ;
	b = &top->next->data;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	swapab(t_list *top, t_list *bottom)
{
	swap(top);
	swap(bottom);
}
