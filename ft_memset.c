/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:24:55 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 10:54:00 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *a, int j, size_t b)
{
	unsigned char	*prepare;
	size_t			i;

	prepare = a;
	i = 0;
	while (i < b)
	{
		prepare[i] = (unsigned char)j;
		i++;
	}
	return (prepare);
}
