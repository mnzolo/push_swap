/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:08:35 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/25 10:35:57 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	char	**r2;

	r2 = (char **)ap;
	if (ap == NULL)
		return ;
	if (r2 != NULL)
	{
		free(*r2);
	}
	*r2 = NULL;
}
