/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 10:47:40 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 11:18:53 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_intersection;

	new_intersection = (t_list *)malloc(sizeof(t_list));
	if (!new_intersection)
		return (NULL);
	if (!content)
	{
		new_intersection->content = (void *)content;
		new_intersection->content_size = 0;
	}
	else
	{
		new_intersection->content = (void *)malloc(content_size);
		if (!new_intersection->content)
			return (NULL);
		ft_memcpy(new_intersection->content, content, content_size);
		new_intersection->content_size = content_size;
	}
	new_intersection->next = NULL;
	return (new_intersection);
}
