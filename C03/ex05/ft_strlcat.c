/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:12:00 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/09 11:53:21 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	str_len(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i1;
	unsigned int	i2;
	unsigned int	index;

	i1 = str_len(dest);
	i2 = str_len(src);
	if (size <= i1)
	{
		i2 += size;
	}
	else
	{
		i2 += i1;
	}
	index = 0;
	while (src[index] != '\0' && i1 < size)
	{
		dest[i1] = src[index];
		index++;
		i1++;
	}
	dest[i1] = '\0';
	return (i2);
}
