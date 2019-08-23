/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:37:45 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/23 16:41:37 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	is(char *v)
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

int	check(t_list *top)
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

#include <stdio.h>
int main(int argc, char **argv)
{
	int 	i;
	int 	m;
	char	*line;

	t_list 	*top = NULL;
	t_list 	*stack_b = NULL;
	i = argc - 1;
	while (argc - 1)
	{
		if (is(argv[i]) == 1 && isMax(argv[i]) == 1)
		{
			m = ft_atoi(argv[i]);
			top = push(m, top);
			i--;
		}
		else if (is(argv[i]) == 0 || isMax(argv[i]) == 0)
		{
			ft_putstr("Error");
			exit(1);
		}
		else if (check(top) == 0)
		{
			ft_putstr("Error");
		}
		argc--;
	}
	 while (get_next_line(0, &line))
        {
            do_stack(&top, &stack_b, line);
        }
	if (sorted(top, ft_lstlen(top)) == 1)
	{
		ft_putendl("OK");
	}
	else
		ft_putendl("KO");
	return (0);
}
