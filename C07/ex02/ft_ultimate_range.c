/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:09:01 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/26 16:32:44 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = 0;
	i = max - min;
	*range = malloc(sizeof(int) * i);
	if (!*range)
		return (-1);
	while (min < max)
	{
		*(*range + j) = min;
		min++;
		j++;
	}
	return (j);
}
