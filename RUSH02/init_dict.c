#include "main.h"

#define BUF_SIZE 4096

char	*ft_init_dict(char *str)
{
	int		i;
	int		fd;
	int		ret;
	char	*strr;
	char	buf[BUF_SIZE + 1];

	i = 0;
	fd = open(str, O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	strr = buf;
	return (ft_parse_dict(strr));
}
