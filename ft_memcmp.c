/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:26:35 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 13:30:27 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t j)
{
	const unsigned char	*prepare1;
	const unsigned char	*prepare2;
	size_t				i;

	prepare1 = (unsigned char *)s1;
	prepare2 = (unsigned char *)s2;
	i = 0;
	while (i < j)
	{
		if ((unsigned char)prepare1[i] != (unsigned char)prepare2[i])
			return ((unsigned char)prepare1[i] - (unsigned char)prepare2[i]);
		i++;
	}
	return (0);
}
