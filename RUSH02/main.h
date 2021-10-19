#ifndef MAIN_H
# define MAIN_H

# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	**ft_create_tab(char *nbr);
char	**ft_put_in_tab(char *nbr, char **tab, int size);
void	ft_check_nbr(char nb, int x, int y, char **dict);
void	ft_to_text(char **tab, int size, char **dict);

int		ft_search_j2(char nb, char **dict, char x, char y);
int		ft_search_j1(char nb, char **dict, char x, char y);
int		ft_search_j0(char nb, char number, char **dict, char x, char y);
int		ft_search_j0_2(char nb, char number, char **dict,
			char x, char y, int i);
void	ft_check_length(char **dict, char x, char y);
int		ft_count_nbr(char **dict, char nb);
void	ft_read_me(char *str, char x, char y);

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_size(char *nbr);
int		ft_strlen(char *str);
int		ft_strlen_ws(char *str);

char	**ft_dict_to_tab(char *str);
char	*ft_create_dict(void);
char	*ft_parse_dict(char *str);
int		ft_count_dict_line(char *str);
char	**ft_length_dict_line(char *str, char **array);

char	*ft_init_dict(char *str);

void	ft_sort_dict(char **str, int size);
int		ft_check_dict(char **strs, int size);

#endif
