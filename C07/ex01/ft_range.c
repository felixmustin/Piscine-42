/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:01:45 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/18 11:41:29 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*ptr;

	j = 0;
	i = max - min;
	if (min >= max)
		return (0);
	ptr = (int *) malloc(sizeof(int) * i);
	while (min < max)
	{
		ptr[j] = min++;
		j++;
	}
	return (ptr);
}
