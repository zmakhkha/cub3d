/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraidry <edraidry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:57:43 by edraidry          #+#    #+#             */
/*   Updated: 2023/06/22 19:08:02 by edraidry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#include "get_next_line/get_next_line.h"


typedef struct s_content {
	char	*no;
	char	*ea;
	char	*so;
	char	*we;
	char	*ff;
	char	*cc;
	int		start;
	char	**map;
 }  t_content;

 int		ft_strncmp(char *s1, char *s2, int n);
 void		ft_error(char *msg);
 void		ft_args(int ac, char **av);
 char		**ft_realloc(char **old, char *new);
 char		**ft_read_file(char *file);
 t_content	*ft_get_all_content(char **lines);

 char	*ft_strdup(const char *src);
