/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:02:57 by mnzolo            #+#    #+#             */
/*   Updated: 2019/08/23 17:01:53 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "get_next_line.h"
#include <stdlib.h>

typedef struct 		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

int					ft_lstlen(t_list *top);
int					isEmpty(t_list *stack);
void				print(t_list *top);
t_list				*push(int dat, t_list *top);
void				nswap(t_list *top, char c);
void				ab_swap(t_list *stack_a, t_list *stack_b, char c);
void				push_b(t_list **top, t_list **stack_b, char c);
void				push_a(t_list **stack_b, t_list **top, char c);
void				rot(t_list **top, char c);
int					instruct(char *v);
void				rrot_ab(t_list **stack, char c);
void				rrrot_ab(t_list **stacka, t_list **stackb, char w);
struct				node revrot(t_list *top);
void				half_sort(t_list **top, t_list **b, int len, int *ch);
void				call(t_list **a, t_list **b);
int					find_min(t_list *stack);
int					find_max(t_list *stack);
int					loc(t_list *top, int min);
int					pos(t_list *a, int loc);
int					*range(t_list *top, int big, int small);
void				small_to_top(t_list **top, t_list **b, int loc, int len);
void				big_to_top(t_list **top, t_list **b, int loc, int len);
void				push_smallest(t_list **stack, t_list **b);
void				push_largest(t_list **stack, t_list **b);
t_list				*plus(int v, t_list *top);
int					do_push(t_list *temp, t_list *p, t_list **s_b, t_list **top);
int					*find_ch(t_list *top, int a, int b);
void				delete_n(t_list *top);
int					half_mid(int len);
void				results(t_list **top, t_list **b, int k, int *ch);
void				exce(t_list **a, t_list **b);
void				bsmall_to_top(t_list **top, int loc, int len);
void				generate(int res1, int res2, t_list **top, t_list **b);
int					sorted(t_list *stack, int len);
int					isMax(char *str);
void				do_stack(t_list **a, t_list **b, char *c);
void				rrot(t_list **a, t_list **b, char c);
void				sort_3(t_list **stacka, char c);
void				sort_2(t_list **stacka, char c);
void				sort_5(t_list **stacka, t_list **stackb);
void				less(t_list **stacka, t_list **stackb, int n);
int					is(char *v);
int					check(t_list	*top);
int					ischeck(char *v);

#endif
