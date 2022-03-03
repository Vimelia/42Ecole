/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:34:33 by vdegirme          #+#    #+#             */
/*   Updated: 2022/03/03 21:01:12 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
		e++;
	return (e);
}

char	*ft_strdup(char *src)
{
	int		e;
	char	*dest;

	e = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[e])
	{
		dest[e] = src[e];
		e++;
	}
	dest[e] = '\0';
	return (dest);
}

t_stock_str	*ft_strs_to_tab(int sayi, char **icerik)
{
	int			e;
	t_stock_str	*array;

	array = malloc((sayi + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
	e = 0;
	while (e < sayi)
	{
		array[e].size = ft_strlen(icerik[e]);
		array[e].str = icerik[e];
		array[e].copy = ft_strdup(icerik[e]);
		e++;
	}
	array[e].str = 0;
	array[e].copy = 0;
	return (array);
}
