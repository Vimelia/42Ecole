/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 05:21:21 by vdegirme          #+#    #+#             */
/*   Updated: 2022/03/02 13:12:09 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++];
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i] || (s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int f, char *ff)
{
	int i;
	char *a;
	char *b;

	i = f - 1;
	while(ff[i][1] != '\0' && i > 0)
	{
		a = ff[i][1];
		j = i - 1;
		while(ff[j][1])
		{
			b = ff[j][1];
			if(ft_strcmp(a,b) >	0)
				ft_swap(&a, &b);
			j--;
		}
		i--;
	}
	while (i < f)
	{
		ft_putstr(ff[i]);
		i++;
	}
	return (0);
}
