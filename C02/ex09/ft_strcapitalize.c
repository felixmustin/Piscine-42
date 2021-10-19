/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:18:57 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/12 12:19:03 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	a = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z')
			|| (str[a] >= '0' && str[a] <= '9'))
		{
			if (!((str[a - 1] >= 'a' && str[a - 1] <= 'z')
					|| (str[a - 1] >= 'A' && str[a - 1] <= 'Z')
					|| (str[a - 1] >= '0' && str[a - 1] <= '9')))
			{
				if (str[a] >= 'a' && str[a] <= 'z')
				{
					str[a] = str[a] - 32;
				}
			}
			else if (str[a] >= 'A' && str[a] <= 'Z')
				str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
