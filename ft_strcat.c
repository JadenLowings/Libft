/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:49:02 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 13:41:58 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t		dst_length;
	char		*dst_end;

	dst_length = ft_strlen(dst);
	dst_end = dst + (sizeof(char) * dst_length);
	ft_strcpy(dst_end, src);
	return (dst);
}
