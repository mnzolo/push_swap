/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:42:01 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/24 17:01:00 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_list **stacka, t_list **stackb, char c)
{
	push_smallest(stacka, stackb);
	sort_3(stacka, c);
	push_a(stackb, stacka, c);
}
