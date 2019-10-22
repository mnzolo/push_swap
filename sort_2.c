/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 09:48:08 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/24 16:46:38 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **stacka, char c)
{
	t_list *temp;

	temp = *stacka;
	if (temp->data > temp->next->data)
	{
		nswap(*stacka, c);
	}
	stacka = &temp;
}
