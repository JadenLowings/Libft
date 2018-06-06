/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:54:29 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 08:54:31 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *a, void (*b)(char *))
{
	if (!a || !b)
		return ;
	while (*a)
	{
		b(a);
		a++;
	}
}
