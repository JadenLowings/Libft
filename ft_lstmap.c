/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:18:21 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 11:21:32 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*result;
	t_list		*front;
	t_list		*element;

	if (!lst || !f)
		return (NULL);
	element = f(lst);
	if (!(result = ft_lstnew(element->content, element->content_size)))
		return (NULL);
	lst = lst->next;
	front = result;
	while (lst)
	{
		element = f(lst);
		if (!(result->next = ft_lstnew(element->content,
						element->content_size)))
			return (NULL);
		result = result->next;
		lst = lst->next;
	}
	return (front);
}
