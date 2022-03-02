/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:27:30 by vdegirme          #+#    #+#             */
/*   Updated: 2022/03/02 05:06:51 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int c, char **av)
{
	int	i;
	int	r;

	r = c - 1;
	while (c > 1)
	{
		i = 0;
		while (av[r][i] != '\0')
		{
			write(1, &av[r][i], 1);
			i++;
		}
		write(1, "\n", 1);
		r--;
		c--;
	}
	return (0);
}
