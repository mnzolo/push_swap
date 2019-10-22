/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:13:21 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/25 17:24:34 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_create(t_list *top, char *line)
{
	if (sorted(top, ft_lstlen(top)) == 1 && line == NULL)
	{
		ft_putendl("OK");
		return (0);
	}
	if (instruct(line) == 0 && top != NULL && line != NULL)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
