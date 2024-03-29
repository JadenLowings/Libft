/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:44:48 by jlowing           #+#    #+#             */
/*   Updated: 2018/05/31 09:34:50 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *a, int fd)
{
	if (a)
	{
		ft_putstr_fd(a, fd);
		ft_putchar_fd('\n', fd);
	}
}
