/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_ch2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 10:06:52 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/25 11:00:09 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*find_ch2(t_list *top, int a, int b)
{
	int j;
	int i;
	int new;
	int *chunk;

	j = 0;
	i = 1;
	new = 0;
	chunk = (int *)malloc(sizeof(int) * 7);
	if ((a - b) % 2 != 0)
		new += 1;
	new += (a - b) / 7;
	chunk[0] = new + b - 1;
	while (i < 6 && j < 7)
		chunk[i++] = chunk[j++] + new;
	chunk[i] = find_max(top);
	return (chunk);
}
