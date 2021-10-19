/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:55:28 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/17 15:46:20 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base)
{
	int	index;

	index = 0;
	while ((str[index] == ' ' || str[index] == '\n'
			|| str[index] == '\t' || str[index] == '\v'
			|| str[index] == '\f' || str[index] == '\r') && str[index])
		index++;
	while ((ft_char_is_base(str[index], base) < 0) && str[index])
	{
		if (str[index] != '+' && str[index] != '-')
			return (0);
		index++;
	}
	while ((ft_char_is_base(str[index], base) >= 0) && str[index])
		index++;
	return (--index);
}

int	ft_valid_base_l(char *base, int l)
{
	int	i;
	int	ti;

	i = 0;
	ti = i + 1;
	while (i < l)
	{
		while (ti < l)
		{
			if (base[i] == base[ti])
				return (-1);
			ti++;
		}
		if (base[i] <= 32)
			return (-1);
		if (base[i] == '-' || base[i] == '+')
			return (-1);
		i++;
	}
	return (i);
}

int	ft_is_negative(char *str, char *base, int res)
{
	int	index;
	int	negativity;

	index = 0;
	negativity = 0;
	while ((str[index] == ' ' || str[index] == '\n'
			|| str[index] == '\t' || str[index] == '\v'
			|| str[index] == '\f' || str[index] == '\r') && str[index])
		index++;
	while ((ft_char_is_base(str[index], base) < 0) && str[index])
	{
		if (str[index] == '-')
			negativity++;
		index++;
	}
	if (negativity % 2 == 0)
		return (res);
	return (-res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	bl;
	int	t;
	int	i;
	int	res;
	int	w;

	w = 1;
	res = 0;
	i = 0;
	while (base[i] != '\0')
		i++;
	bl = ft_valid_base_l(base, i);
	i = ft_atoi(str, base);
	if (bl <= 1)
		return (0);
	while (i >= 0 && ft_char_is_base(str[i], base) >= 0)
	{
		t = 0;
		while (str[i] != base[t])
			t++;
		res = res + t * w;
		w *= bl;
		i--;
	}
	return (ft_is_negative(str, base, res));
}
