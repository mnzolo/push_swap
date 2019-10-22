/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:14:42 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/24 15:51:31 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		instruct(char *v)
{
	if (ft_strcmp(v, "sa") == 0)
		return (1);
	else if (ft_strcmp(v, "sb") == 0)
		return (1);
	else if (ft_strcmp(v, "ss") == 0)
		return (1);
	else if (ft_strcmp(v, "pa") == 0)
		return (1);
	else if (ft_strcmp(v, "pb") == 0)
		return (1);
	else if (ft_strcmp(v, "ra") == 0)
		return (1);
	else if (ft_strcmp(v, "rb") == 0)
		return (1);
	else if (ft_strcmp(v, "rr") == 0)
		return (1);
	else if (ft_strcmp(v, "rra") == 0)
		return (1);
	else if (ft_strcmp(v, "rrb") == 0)
		return (1);
	else if (ft_strcmp(v, "rrr") == 0)
		return (1);
	return (0);
}
