/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:13:08 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/06 15:16:34 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int r_i;
	int	tmp;

	tmp=0;
	i=0;
	r_i = 0;
	
	while(i<size-1)
	{
		while (r_i < size-i)
		{
			if (tab[r_i] > tmp)
			{
				tmp = tab[r_i];
			}
			r_i++;
		}
		tab[size-1] = tmp;
		printf("%d", tmp);
		i++;
		tmp = 0;
	}
}