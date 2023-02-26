/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saltinba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:06:03 by saltinba          #+#    #+#             */
/*   Updated: 2022/10/21 23:13:01 by saltinba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	ilk;
	int	son;
	int	depo;

	ilk = 0;
	son = size -1;
	while (ilk < (size / 2))
	{
		depo = tab[ilk];
		tab[ilk] = tab[son];
		tab[son] = depo;
		ilk++;
		son--;
	}
}
