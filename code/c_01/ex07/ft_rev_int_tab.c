/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:50:46 by vdegirme          #+#    #+#             */
/*   Updated: 2022/02/21 15:12:23 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	tmp;

	x = 0;
	while (x < (size / 2))
	{
		tmp = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = tmp;
		x++;
	}
}
