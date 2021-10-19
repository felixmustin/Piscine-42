/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 13:59:47 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/05 19:00:23 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer_a;
	int	buffer_b;

	buffer_a = *a;
	buffer_b = *b;
	*a = buffer_a / buffer_b;
	*b = buffer_a % buffer_b;
}
