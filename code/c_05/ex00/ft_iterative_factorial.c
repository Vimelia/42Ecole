/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:39:43 by vdegirme          #+#    #+#             */
/*   Updated: 2022/03/01 21:49:17 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
			i = i * nb--;
	}
	return (i);
}
