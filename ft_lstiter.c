/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:17:44 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 13:19:49 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*current;
	t_list	*next;

	if (lst && f)
	{
		current = lst;
		while (current->next)
		{
			next = current->next;
			f(current);
			current = next;
		}
		f(current);
	}
}
