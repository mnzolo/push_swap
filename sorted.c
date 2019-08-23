/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 18:03:27 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/20 14:55:32 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     sorted(t_list *stack, int len)
{
   t_list *temp;
   temp = stack;
   while (temp->next != NULL)
   {
       if (temp->data > temp->next->data)
           return (0);
       temp = temp->next;
   }
   if (ft_lstlen(stack) == len)
       return (1);
   return (0);
}
