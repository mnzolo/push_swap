/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:17:31 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/19 12:08:10 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list revrot(t_list *top)
{
	t_list *tmp;
	t_list *p;

	tmp = top;
	while (tmp->next ->next != NULL)
	{
		tmp = tmp->next;
	}
	top = tmp->next;
	tmp->next = NULL;
	top->next = p->next;
	return (top);
}
