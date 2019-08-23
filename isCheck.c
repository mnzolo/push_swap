/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isCheck.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 16:14:11 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/23 17:01:47 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function calls the checker functions and checks the numbers
//call it the sorted line in the main 
//should return true or false
//isMax
//is
//check
//instruct

#include "push_swap.h"

int		ischeck(char *v)
{
	if (isMax(v) == 0 || is(v) == 0)
	{
		return (0);
	}
	return (1);
}

int     is(char *v)
{
    int i;


    i = 0;
    if (ft_strcmp(v, "2147483647") == 0)
    {
        return (1);
    }
    if (v[i] == '-' || v[i] == '+')
    {
        i++;
    }
    while (v[i] >= '0' && v[i] <= '9')
    {
        i++;
        if (v[i] == '\0')
            return (1);
    }
    return (0);
}

int check(t_list *top)
{
    t_list *s;

    while (top)
    {
        s = top->next;
        while (s)
        {
            if (top->data == s->data)
                return (0);
            s = s->next;
        }
        top = top->next;
    }
    return (1);
}
