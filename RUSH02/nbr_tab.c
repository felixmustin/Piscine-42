#include "main.h"

char	**ft_create_tab(char *nbr)
{
	char	**tab;
	int		size;
	int		i;

	i = 0;
	size = ft_size(nbr);
	tab = malloc(sizeof(char *) * size);
	while (i < size)
		tab[i++] = malloc(sizeof(char) * 4);
	return (ft_put_in_tab(nbr, tab, size));
}

char	**ft_put_in_tab(char *nbr, char **tab, int size)
{
	int	i;
	int	i2;
	int	i3;
	int	l;

	l = ft_strlen(nbr);
	i = 0;
	i3 = 0;
	while ((size - i) > 0)
	{
		i2 = 0;
		while (i2 < 3 && i3 < l)
		{
			tab[i][i2] = nbr[l - 1 - i3];
			i2++;
			i3++;
		}
		tab[i][i2] = '\0';
		i++;
	}
	return (tab);
}
