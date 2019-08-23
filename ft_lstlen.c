/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:13:24 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/19 10:46:26 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstlen(t_list *r)
{
	t_list		*temp;
	int			len;

	temp = r;
	len = 0;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

int		half_mid(int len)
{
	int l;

	if (len % 2 == 0)
		l = len / 2;
	else
		l = (len / 2) + 1;
	return (l);
}
