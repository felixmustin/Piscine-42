/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:22:36 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/09 11:39:15 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	while (dest[i1] != '\0')
	{
		i1++;
	}
	i2 = 0;
	while (src[i2] != '\0' && nb > 0)
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
		nb--;
	}
	dest[i1] = '\0';
	return (dest);
}
