/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:18:20 by vdegirme          #+#    #+#             */
/*   Updated: 2022/02/27 17:55:50 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	n;
	int	a;

	n = 0;
	a = 0;
	while (dest[n] != '\0')
		n++;
	while (src[a] != '\0' && a < nb)
	{
		dest[n] = src[a];
		a++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
