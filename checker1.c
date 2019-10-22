/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:37:45 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/26 13:28:31 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			is(char *v)
{
	int i;

	i = 0;
	if (v[i] == '-' || v[i] == '+')
		i++;
	while (v[i] >= '0' && v[i] <= '9')
	{
		i++;
		if (v[i] == '\0')
			return (1);
	}
	return (0);
}

int			check(t_list *top)
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

static int	string(char *c, char z)
{
	int		count;
	int		x;

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

char		**argc2(char *s, int *l, int *e)
{
	char	**argv;

	*l = string(s, ' ') - 1;
	*e = *l + 1;
	argv = ft_strsplit(s, ' ');
	return (argv);
}

int			main(int argc, char **argv)
{
	t_mtho	x;

	x.r = 1;
	x.top = NULL;
	x.stack_b = NULL;
	x.line = NULL;
	x.i = argc - 1;
	x.k = argc - 1;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		x.r = 0;
		x.k = string(argv[1], ' ');
		argv = argc2(argv[1], &x.i, &argc);
	}
	x.top = create(argv, argc, x.r, x.i);
	if (checking(x.top, x.k, ft_lstlen(x.top)) == 0)
		return (0);
	while (get_next_line(0, &x.line) && instruct(x.line) == 1)
		do_stack(&x.top, &x.stack_b, x.line);
	if (check_create(x.top, x.line) == 0)
		return (0);
	sorted(x.top, ft_lstlen(x.top)) == 1 ? ft_putendl("OK") : ft_putendl("KO");
	return (0);
}
