/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:13:06 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/25 16:48:17 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>

int		*ft_dimension(char *str_map, int dim[2], char clues[3]);
char	*ft_clues(char *str_map, char clues[3]);

char	**ft_solve_map(char **nbr_map, char **map, char clues[3], int dim[2]);
int		ft_verif_input(char **map, int *dim, char *clues);
char	**ft_create_map(int *dim);
char	ft_check_neighbours(char **map, int i, int j);
void	ft_show_map(char **nbr_map, char **map, int *dim, char *clues);
int		*ft_find_max(char **nbr_map, int max[3], int *dim);
void	ft_print(char **map, int *dim);
void	ft_free(char **map, int *dim);

char	*ft_read_input(char *str_file);
char	*ft_read_stdin(void);

void	ft_putstr(char *c);
void	ft_putchar(char c);
int		ft_strlen(char *str);

#endif
