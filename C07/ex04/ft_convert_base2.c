/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:04:56 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/19 11:33:45 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_put_in_array(int nbr_dec, int long_array, int size_base, char *ret);
int		ft_atoi_base(char *str, char *base);
int		ft_array_long(int nbr_dec, int size_base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_dec;
	int		long_array;
	int		neg;
	int		size_base;
	char	*ret;

	neg = 0;
	size_base = ft_strlen(base_to);
	nbr_dec = ft_atoi_base(nbr, base_from);
	if (nbr_dec < 0)
	{
		nbr_dec = -nbr_dec;
		neg = 1;
	}
	long_array = ft_array_long(nbr_dec, size_base);
	ret = malloc(sizeof(char) * long_array);
	ret = ft_put_in_array(nbr_dec, long_array, size_base, ret);
	return (ret);
}

int	ft_array_long(int nbr_dec, int size_base)
{
	int		i;

	i = 0;
	while (nbr_dec > 0)
	{
		nbr_dec = nbr_dec / size_base;
		i++;
	}
	return (i);
}

char	*ft_put_in_array(int nbr, int long_array, int size_base, char *array)
{
	while (nbr > 0)
	{
		array[--long_array] = nbr % size_base;
		nbr = nbr / size_base;
	}
	return (array);
}
