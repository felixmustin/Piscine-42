/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rad_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:25:52 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/26 10:58:35 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#define BUF_SIZE 10000000000

char	*ft_read_input(char *str_file)
{
	int		fd;
	int		ret;
	char	*str_map;
	char	buf[BUF_SIZE + 1];

	fd = open(str_file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open failed\n");
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	str_map = buf;
	if (close(fd == -1))
	{
		ft_putstr("close failed\n");
		return (0);
	}
	return (str_map);
}

char	*ft_read_stdin(void)
{
	int		i;
	int		fd;
	int		ret;
	char	*buf;

	buf = malloc(BUF_SIZE + 1);
	ret = read(0, buf, BUF_SIZE);
	i = ret;
	while (ret != 0)
	{
		ret = read(0, buf + i, BUF_SIZE);
		i += ret;
	}
	buf[i] = '\0';
	return (buf);
}
