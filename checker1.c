/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:37:45 by mnzolo            #+#    #+#             */
/*   Updated: 2019/07/22 09:53:34 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int 	is(char *v)
{
	int i;

	
	i = 0;
	while (v[i] >= '0' && v[i] <= '9')
	{
		i++;
		if (v[i] == '\0')
			return (1);
	}
	return (0);
}
/*
int	check(struct node *top)
{
	struct node *s;

	s = top;
	while (s -> next != NULL)
	{
		if (s -> data == s -> next -> data)
		{
			 return (0);
		}
		s = s -> next;
	}
	return (1);
}*/
void	print(struct node *top)
{
	while (top)
	{
		ft_putnbr(top -> data);
		ft_putstr("->");
		top = top -> next;
	}
}
void	add(int argv)
{
	struct node *tmp;

	tmp = (struct node *)malloc(sizeof(struct node));
	tmp -> data = argv;
	tmp -> next = top;
	top = tmp;
}

int main(int argc, char **argv)
{
	int i;
	int m;

	i = 1;
	while ( i < argc)
	{
		if (is(argv[i]) == 1 /*check(top) == 1*/)
		{
			m = ft_atoi(argv[i]);
			add(m);
			i++;
		}
		else if (is(argv[i]) == 0 /*check(top) == 0*/)
		{
			ft_putstr("Error");
			exit(1);
		}
	}
	print(top);
	return (0);
}
