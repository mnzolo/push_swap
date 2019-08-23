/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isMax.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:29:10 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/23 16:34:19 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		isMax(char *str)
{
	if (ft_strlen(str) == ft_strlen("2147483647"))
	{
		if (ft_strcmp(str, "2147483647") > 0)
		{
			free(str);
			return (0);
		}
	}
	else if (ft_strlen(str) > ft_strlen("2147483647"))
	{
		free(str);
		return (0);
	}
	return (1);
}
