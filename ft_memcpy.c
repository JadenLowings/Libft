/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:25:41 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/04 13:12:32 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*c1;
	char	*c2;

	if (n == 0 || str1 == str2)
		return (str1);
	c1 = (char *)str1;
	c2 = (char *)str2;
	while (--n)
		*c1++ = *c2++;
	*c1 = *c2;
	return (str1);
}
