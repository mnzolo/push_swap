/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:36:37 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/21 12:40:23 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_list **stacka, t_list **stackb)
{
	int	   i;
	int    k;

	i = 0;
	while (i < 2)
	{
		push_smallest(stacka, stackb);
		i++;
	}
	k = ft_lstlen(*stacka);
	if (k == 3)
	{
		sort_3(stacka, 'a');
	}
	push_a(stackb, stacka, 'a');
	push_a(stackb, stacka, 'a');
}
