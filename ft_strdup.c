/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:53:49 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/04 13:09:12 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*src_ret;
	size_t	len;

	len = ft_strlen(src);
	if (!(src_ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	src_ret = ft_memcpy(src_ret, src, len + 1);
	return (src_ret);
}
