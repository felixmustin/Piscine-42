/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:00:06 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/18 10:30:19 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
        i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
    if (nb < 2)
        return (2);
    while (!ft_is_prime(a))
        a++;
    return (a);
    }
}
