/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:55:51 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 09:27:02 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *a, char (*b)(char))
{
	char		*new_variable_a;
	size_t		i;
	size_t		length;

	if (!a)
		return (NULL);
	length = ft_strlen(a);
	new_variable_a = ft_strnew(length);
	if (new_variable_a == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_variable_a[i] = b(a[i]);
		i++;
	}
	return (new_variable_a);
}
