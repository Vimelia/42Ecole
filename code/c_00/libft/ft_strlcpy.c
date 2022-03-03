/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:21:29 by acomak            #+#    #+#             */
/*   Updated: 2022/02/10 10:21:32 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && i < (size -1))
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

// src den dest'e kadar n kadar kopyalar
// src nin uzunluğunu döndürür
//strlcpy'nin özelligi bir eksik alması
// bu yüzden - 1 yaptık null karakteri de almak için
