/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:03:13 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/26 13:32:02 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_stack(t_list **a, t_list **b, char *c)
{
	if (ft_strequ(c, "sa") == 1)
		nswap(*a, 'c');
	else if (ft_strequ(c, "sb") == 1)
		nswap(*b, 'c');
	else if (ft_strequ(c, "ra") == 1)
		rot(a, 'c');
	else if (ft_strequ(c, "rb") == 1)
		rot(b, 'c');
	else if (ft_strequ(c, "rr") == 1)
		rrot(a, b, 'c');
	else if (ft_strequ(c, "pa") == 1)
		push_a(b, a, 'c');
	else if (ft_strequ(c, "pb") == 1)
		push_b(a, b, 'c');
	else if (ft_strequ(c, "ss") == 1)
		ab_swap(*a, *b, 'c');
	else if (ft_strequ(c, "rra") == 1)
		rrot_ab(a, 'c');
	else if (ft_strequ(c, "rrb") == 1)
		rrot_ab(b, 'c');
	else if (ft_strequ(c, "rrr") == 1)
		rrrot_ab(a, b, 'c');
}
