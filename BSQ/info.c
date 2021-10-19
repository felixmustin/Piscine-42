/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imfo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:41:40 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/25 16:42:35 by cmillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_verif(char *str_map, int k)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str_map[i] != '\0')
	{
		if (str_map[i] == '\n')
			j++;
		i++;
	}
	if (k != j - 1)
		return (0);
	return (1);
}

int	*ft_dimension(char *str_map, int dim[2], char clues[3])
{
	int	i;
	int	k;
	int	j;
	int	l;

	j = 0;
	i = 0;
	k = 0;
	l = 0;
	while (str_map[i] != '\n')
		i++;
	while (l < i - 3)
	{
		if (str_map[l] > 47 && str_map[l] < 58)
			k = k * 10 + (str_map[l] - 48);
		l++;
	}
	dim[0] = k;
	i++;
	while (str_map[i++] != '\n')
		j++;
	dim[1] = j;
	if (!(ft_verif(str_map, k)))
		return (0);
	return (dim);
}

char	*ft_clues(char *str_map, char clues[3])
{
	int	i;

	i = 0;
	while (str_map[i] != '\n')
		i++;
	clues[0] = str_map[i - 3];
	clues[1] = str_map[i - 2];
	clues[2] = str_map[i - 1];
	return (clues);
}
