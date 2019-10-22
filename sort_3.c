/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 09:43:11 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/24 16:48:31 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stacka, char c)
{
	t_list	*tmp;

	tmp = *stacka;
	if (tmp->data > tmp->next->data)
		nswap(tmp, c);
	if (tmp->next->data > tmp->next->next->data)
		rrot_ab(&tmp, c);
	if (tmp->data > tmp->next->data)
		nswap(tmp, c);
	*stacka = tmp;
}
