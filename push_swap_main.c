/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:26:54 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/26 12:38:58 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		less(t_list **stacka, t_list **stackb, int n)
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
	if (n == 5)
	{
		sort_4(stacka, stackb, 'a');
	}
	if (n == 6)
	{
		sort_5(stacka, stackb);
	}
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

char		**argc1(char *s, int *l, int *e)
{
	char	**argv;

	*l = string(s, ' ') - 1;
	*e = *l + 2;
	argv = ft_strsplit(s, ' ');
	return (argv);
}

int			main(int argc, char **argv)
{
	t_mtho	c;

	c.r = 1;
	c.stacka = NULL;
	c.stackb = NULL;
	c.n = argc - 1;
	if (argc == 2)
		c.r = 0;
	if (argc == 2)
		argv = argc1(argv[1], &c.n, &argc);
	c.stacka = create2(argv, c.n, c.r);
	if (c.stacka == NULL)
		return (0);
	if (check(c.stacka) == 0)
		return (0);
	if (argc <= 6 && sorted(c.stacka, ft_lstlen(c.stacka)) == 0)
	{
		less(&c.stacka, &c.stackb, argc);
		return (0);
	}
	if (sorted(c.stacka, ft_lstlen(c.stacka) == 1))
		return (0);
	else if (sorted(c.stacka, ft_lstlen(c.stacka)) == 0)
		exce(&c.stacka, &c.stackb);
	return (0);
}
