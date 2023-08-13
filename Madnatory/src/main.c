/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edraidry <edraidry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:02:30 by zmakhkha          #+#    #+#             */
/*   Updated: 2023/08/13 21:40:52 by edraidry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"

void	f()
{
	system("leaks cub3D");
}

int	_main(int n, char **v)
{
	t_vars	*data;

	 atexit(f);
	data = malloc(sizeof(t_vars));
	if (!data)
		ft_exit("Allocation Error!!\n", 1);
	data->parse = parsing_main(n, v);	
	// printf("--------->[%p]\n", data);
	ft_init(data);
	load_images(data);
	ft_render(data);
	ft_wait(data);
	return (0);
}

int main(int n, char **v)
{
	_main( n, v);
}
