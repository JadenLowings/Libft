/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:25:57 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/04 10:13:21 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int j, size_t n)
{
	unsigned char		*prepare;
	const unsigned char	*unknown;
	size_t				i;

	prepare = (unsigned char *)dst;
	unknown = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		prepare[i] = unknown[i];
		if (unknown[i] == (unsigned char)j)
			return ((void *)(prepare + i + 1));
		i++;
	}
	return (NULL);
}
