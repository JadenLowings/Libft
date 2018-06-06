/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:22:15 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/25 08:41:25 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *a, size_t j)
{
	unsigned char	*prepare;
	size_t			i;

	prepare = (unsigned char *)a;
	i = 0;
	while (i < j)
	{
		prepare[i] = 0;
		i++;
	}
}
