/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:14:37 by mnzolo            #+#    #+#             */
/*   Updated: 2019/07/22 08:21:52 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	add(int r)
{
	struct node *tmp;
	struct node *p;

	tmp = (struct node *)malloc(sizeof(node));
	tmp -> data = r;
	tmp ->next = NULL;
	if (root == NULL)
	{
		root = tmp;
	}
	else
	{
		p = root;
		while (p -> next != NULL)
		{
			p = p -> next;
		}
		p ->next = tmp;
	}

}

void print()
{
	//struct node *temp;

	if (root == NULL)
		printf("empty\n");
	else
	{
		//root = temp;
		while (root)
		{
			printf("%d -> ", root -> data);
			root = root -> next;
		}
	}
}

int main(int argc, char **argv)
{
	int i;
	int m;

	i = 1;
	while(i < argc)
	{
		m = ft_atoi(argv[i]);
		add(m);
		i++;
	}
	print();
	return (0);
}
