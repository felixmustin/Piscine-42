/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:59:18 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/18 10:44:21 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
		i++;
	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			nbr;
	t_stock_str	*tab;

	nbr = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	while (nbr < ac)
	{
		tab[nbr].size = ft_strlen(av[nbr]);
		tab[nbr].str = av[nbr];
		tab[nbr].copy = ft_strdup(av[nbr]);
		nbr++;
	}
	tab[nbr].size = 0;
	tab[nbr].str = 0;
	tab[nbr].copy = 0;
	return (tab);
}
