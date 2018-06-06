/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:22:10 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/04 12:15:56 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int		len;

	len = ft_strlen((char *)src);
	while (0 != len && src[len] != (char)c)
		len--;
	if (src[len] == (char)c)
		return ((char *)&src[len]);
	return (NULL);
}
