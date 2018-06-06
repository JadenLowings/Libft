/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:22:40 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 09:22:42 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *max, const char *min)
{
	size_t		i;
	size_t		max_length;

	i = 0;
	max_length = ft_strlen(max);
	if (ft_strlen(min) == 0)
		return ((char *)max);
	while (i < max_length)
	{
		if (ft_memcmp((max + i), min, ft_strlen(min)) == 0)
			return ((char *)(max + i));
		i++;
	}
	return (NULL);
}
