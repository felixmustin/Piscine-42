#include "main.h"

#define BUF_SIZE 4096

char	*ft_create_dict(void)
{
	int		i;
	int		fd;
	int		ret;
	char	*str;
	char	buf[BUF_SIZE + 1];

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	str = buf;
	return (ft_parse_dict(str));
}

char	*ft_parse_dict(char *str)
{
	int		i;
	int		i2;
	char	*dest;

	dest = malloc(sizeof(*dest) * ft_strlen_ws(str));
	i = 0;
	i2 = 0;
	while (str[i + i2])
	{
		if (str[i + i2] == ' '
			|| (str[i + i2] == '\n' && str[i + i2 + 1] == '\n'))
			i2++;
		else
		{
			dest[i] = str[i + i2];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_dict_line(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\n' && str[i] != '\0')
			i++;
		count++;
		i++;
	}
	return (count);
}

char	**ft_length_dict_line(char *str, char **dict)
{
	int	i;
	int	count;
	int	n;

	n = -1;
	i = 0;
	while (str[i] != 0)
	{	
		count = 0;
		while (str[i] != '\n' && str[i] != '\0')
		{
			i++;
			count++;
		}
		while (str[i] == '\n')
			i++;
		if (count > 0)
		{	
			n++;
			dict[n] = malloc(sizeof(char) * (count + 1));
		}
	}
	dict[n + 1] = malloc(sizeof(char));
	dict[n + 1][0] = '\0';
	return (dict);
}

char	**ft_dict_to_tab(char *str)
{
	int		i;
	int		j;
	int		k;
	int		n;
	char	**dict;

	i = ft_count_dict_line(str);
	dict = malloc(sizeof(char *) * (i + 1));
	dict = ft_length_dict_line(str, dict);
	j = 0;
	n = -1;
	while (str[j] != '\0')
	{
		while (str[j] == '\n')
			j++;
		k = 0;
		n++;
		while (str[j] != '\n' && str[j] != '\0')
			dict[n][k++] = str[j++];
		dict[n][k] = '\0';
	}
	ft_sort_dict(dict, i);
	return (dict);
}
