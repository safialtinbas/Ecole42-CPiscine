/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saltinba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:46:26 by saltinba          #+#    #+#             */
/*   Updated: 2022/11/01 13:08:50 by saltinba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	index = 2;
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
