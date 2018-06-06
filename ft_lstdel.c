/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:18:06 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 11:18:08 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alt, void (*delt)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	if (alt && delt)
	{
		current = *alt;
		while (current)
		{
			next = current->next;
			delt(current->content, current->content_size);
			free(current);
			current = current->next;
		}
		*alt = NULL;
	}
}
