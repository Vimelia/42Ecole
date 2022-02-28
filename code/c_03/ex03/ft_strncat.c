/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdegirme <vdegirme@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:18:20 by vdegirme          #+#    #+#             */
/*   Updated: 2022/02/28 15:58:38 by vdegirme         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
	{
		dest[a++] = src[b++];
	}
	dest[n] = '\0';
	return (dest);
}

int main()
{
	char src[] = "Network";
	char dest[] = "42";
	printf("%s", ft_strncat(dest, src, 7);
	return 0;
}
