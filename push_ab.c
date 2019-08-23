/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:40:04 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/20 12:03:48 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		do_push(t_list *temp, t_list *p, t_list **s_b, t_list **top)
{
	int dat;

	dat = p->data;
	if (temp == NULL)
	{
		free(p);
		return (0);
	}
	temp->data = dat;
	temp->next = *top;
	*top = temp;
	*s_b = p->next;
	return (1);
}
