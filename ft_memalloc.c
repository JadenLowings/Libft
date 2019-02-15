/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:42:35 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 09:42:36 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size_of)
{
	void		*prepare;

	prepare = (void *)malloc(size_of);
	if (prepare)
	{
		ft_bzero(prepare, size_of);
		return (prepare);
	}
	return (NULL);
}
