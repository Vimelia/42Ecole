/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:53:42 by vdegirme          #+#    #+#             */
/*   Updated: 2022/03/02 18:33:27 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		write(1, &str[e], 1);
		e++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	e;

	e = 0;
	while (s1[e] != '\0' || s2[e] != '\0')
	{
		if (s1[e] == s2[e])
			e++;
		if (s1[e] < s2[e] || s1[e] > s2[e])
			return (s1[e] - s2[e]);
	}
	return (0);
}

void	ft_swap(char **x, char **y)
{
	char	*k;

	k = *x;
	*x = *y;
	*y = k;
}

int	main(int size, char **arg)
{
	int	e;
	int	d;

	d = 1;
	while (d < size -1)
	{
		e = 1;
		while (e < size -1)
		{
			if (ft_strcmp(arg[e], arg[e + 1]) > 0)
			{
				ft_swap(&arg[e], &arg[e + 1]);
			}
			e++;
		}
		d++;
	}
	e = 1;
	while (e < size)
	{
		ft_putstr(arg[e]);
		write(1, "\n", 1);
		e++;
	}
	return (0);
}
