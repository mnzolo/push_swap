/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:43:00 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/21 09:35:08 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_n(t_list *top)
{
	t_list *temp;

	temp = top;
	top = temp->next;
	temp->next = NULL;
	free(temp);
}
