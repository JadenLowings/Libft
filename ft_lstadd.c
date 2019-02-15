/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:16:50 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 12:17:04 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alt, t_list *new_intersection)
{
	if (alt && new_intersection)
	{
		new_intersection->next = *alt;
		*alt = new_intersection;
	}
}
