/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_places.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:19:25 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/01 11:19:34 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_places(int num)
{
	int	places;

	if (num == -2147483648)
		return (10);
	places = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		places++;
	}
	while (num)
	{
		num /= 10;
		places++;
	}
	return (places);
}
