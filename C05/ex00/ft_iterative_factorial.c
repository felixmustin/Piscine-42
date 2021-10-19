/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:38:15 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/12 14:55:04 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{	
	int	rep;

	rep = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (nb != 0)
		{
			rep *= nb;
			nb--;
		}
		return (rep);
	}
}
