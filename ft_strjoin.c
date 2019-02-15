/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:55:08 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 10:25:14 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		length;
	char		*bridge;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	bridge = ft_strnew(length);
	if (bridge == NULL)
		return (NULL);
	ft_strcat(bridge, s1);
	ft_strcat(bridge, s2);
	return (bridge);
}
