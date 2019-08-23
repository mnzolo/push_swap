#include "push_swap.h"
#include <stdio.h>

void		 rot(t_list **top, char c)
{
	t_list *p;
	t_list *t;

	if (top == NULL)
	{
		return ;
	}
	t = *top;
	p = *top;
	*top = p->next;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = t;
	p->next->next = NULL;
	if (c == 'c')
		return ;
	else if (c == 'a')
	{
		ft_putendl("ra");
	}
	else if (c == 'b')
	{
		ft_putendl("rb");
	}
}

void		rrot(t_list **a, t_list **b, char c)
{
	rot(a, c);
	rot(b, c);
}
