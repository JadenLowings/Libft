/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:53:01 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 10:57:22 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	size_t		source_length;
	char		*end_result;

	source_length = ft_strlen(src) + 1;
	end_result = (char *)ft_memcpy(dst, src, source_length);
	return (end_result);
}
