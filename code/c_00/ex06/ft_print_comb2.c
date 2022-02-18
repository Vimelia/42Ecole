/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:08:39 by vdegirme          #+#    #+#             */
/*   Updated: 2022/02/18 20:19:52 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ptt( char c)
{
	write (1, &c, 1);
}

void	ft_put(int a, int b)
{
	ft_ptt(48 + a / 10);
	ft_ptt(48 + a % 10);
	ft_ptt(' ');
	ft_ptt(48 + b / 10);
	ft_ptt(48 + b % 10);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_put(x, y);
			y++;
		}
		x++;
	}
}
