/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:35:07 by vdegirme          #+#    #+#             */
/*   Updated: 2022/03/03 17:09:42 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;

	n = 0;
	while (src[n])
		n++;
	ptr = malloc(sizeof(char) * n + 1);
	if (!ptr)
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		*(ptr + n) = *(src + n);
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
