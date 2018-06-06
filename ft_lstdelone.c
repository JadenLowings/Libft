/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:17:25 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 11:17:32 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alt, void (*delt)(void *, size_t))
{
	if (alt && delt)
	{
		delt((*alt)->content, (*alt)->content_size);
		free(*alt);
		*alt = NULL;
	}
}
