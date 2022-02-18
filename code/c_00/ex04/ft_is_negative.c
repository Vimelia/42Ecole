/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:52:14 by vdegirme          #+#    #+#             */
/*   Updated: 2022/02/16 19:18:40 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	down;
	char	up;

	down = 'N';
	up = 'P';
	if (n >= 0)
	{
		write(1, &up, 1);
	}
	else
	{
		write(1, &down, 1);
	}
}
