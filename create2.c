/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 10:26:07 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/26 12:39:43 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create2(char **s, int n, int r)
{
	t_list	*stacka;
	int		m;

	stacka = NULL;
	while (n >= r)
	{
		if (ischeck(s[n]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		m = ft_atol(s[n]);
		stacka = push(m, stacka);
		n--;
	}
	return (&*stacka);
}
