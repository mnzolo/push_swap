/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:26:54 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/23 17:01:39 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	less(t_list **stacka, t_list **stackb, int n)
{
	if (n == 3)
    {
        sort_2(stacka, 'a');
        return ;
    }
    if (n == 4)
    {
        sort_3(stacka, 'a');
        return ;
    }
	if (n == 6)
	{
		sort_5(stacka, stackb);
	}
}

static  int string(char *c, char z)
{
    int     count;
    int     x;

    x = 0;
    count = 0;
    while (c[x] == z)
        x++;
    while (c[x] != '\0')
    {
        if (x == 0 && c[x] != z)
            count++;
        if (c[x] != z && c[x - 1] == z)
            count++;
        x++;
    }
    return (count);
}

int main(int argc, char **argv)
{
	int m;
	int n;
	int r;
    t_list *stacka = NULL;
   	t_list *stackb = NULL;

	r = 1;
	n = argc - 1;
	if (argc == 2)
		r = 0;
	if (argc == 2)
	{
		n = string(argv[1], ' ') - 1;
		argc = n + 2;
		argv = ft_strsplit(argv[1], ' ');
	}
    while (n >= r)
    {
		if (ischeck(argv[n]) == 0)
		{
			ft_putstr("Error");
			return (0);
		}
        m = ft_atoi(argv[n]);
        stacka = push(m, stacka);
        n--;
    }
	if (check(stacka) == 0)
	{
		ft_putstr("Error");
		return (0);
	}
	if (argc <= 6)
	{
		less(&stacka, &stackb, argc);
		return (0);
	}
	if (sorted(stacka, ft_lstlen(stacka) == 1))
			return (0);
	else if (sorted(stacka, ft_lstlen(stacka)) == 0)
		exce(&stacka, &stackb);
	return (0);
}
