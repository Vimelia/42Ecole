/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:36:21 by vdegirme          #+#    #+#             */
/*   Updated: 2022/02/13 17:56:43 by vdegirme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	p;
	int	r;

	r = 1;
	while (r <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 && r == 1) || (p == x && r == 1))
				ft_putchar('A');
			else if ((p == 1 && r == y) || (p == x && r == y))
				ft_putchar('C');
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}	
}
