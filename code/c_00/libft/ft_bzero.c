/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:17:31 by acomak            #+#    #+#             */
/*   Updated: 2022/02/10 10:17:34 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*asdf;

	i = 0;
	asdf = (char *)s;
	while (i < n)
	{
		asdf[i] = 0;
		i++;
	}
	s = asdf;
}

// bir stringde istedigimiz kadar index sayisini 0 ile doldurur
