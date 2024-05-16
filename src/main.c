/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:31:14 by gsilva            #+#    #+#             */
/*   Updated: 2024/05/16 11:58:02 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

t_plr	*plr(void)
{
	static t_plr	_plr;

	return (&_plr);
}

t_mlx	*mlx(void)
{
	static t_mlx	_mlx;

	return (&_mlx);
}

t_win	*win(void)
{
	static t_win	_win;

	return (&_win);
}

t_map	*map(void)
{
	static t_map	_map;

	return (&_map);
}

int	main(int argc, char **argv)
{
	if(ac == 1)
		error("Missing arguments");
	(void)argc;
	if (!check_ext(argv[1]))
	{
		error("Invalid map extension", 0);
		return (0);
	}
	mlx()->mlx = mlx_init();
	if (fill_map(argv[1]) == -1)
		finish_exec();
	else
		start_game();
	ft_printf("\n");
	return (0);
}
