/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:04:23 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/26 12:54:09 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create(char **s, int ac, int r, int i)
{
	t_list	*top;
	int		m;

	top = NULL;
	while (ac - 1 >= r)
	{
		if (ismax(s[i]) == 1 && is(s[i]) == 1)
		{
			m = ft_atol(s[i]);
			top = push(m, top);
			i--;
		}
		else if (ismax(s[i]) == 0 || is(s[i]) == 0)
			return (0);
		ac--;
	}
	return (&*top);
}
