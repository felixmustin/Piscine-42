/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:30:36 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/08 17:11:26 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	iN;

	if (*to_find == 0)
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		iN = 0;
		while (to_find[iN] == str[i + iN])
		{
			if (to_find[iN + 1] == '\0')
			{
				return (str + i);
			}
			iN++;
		}
		i++;
	}
	return (0);
}
