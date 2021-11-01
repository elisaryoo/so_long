/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:56:06 by eryoo             #+#    #+#             */
/*   Updated: 2021/10/31 19:56:10 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	player_move(t_game *game, t_mlx *mlx)
{
	mlx_key_hook(mlx->win, key_input, mlx);
}

int	key_input(int key, t_mlx *mlx)
{
	if (key == 'a')
		a_input(mlx);
	else if (key == 'd')
		d_input(mlx);
	else if (key == 'w')
		w_input(mlx);
	else if (key == 's')
		s_input(mlx);
	else if (key == 65307)
	{
		free_mlx(mlx);
		exit(1);
	}
	mlx_clear_window(mlx->mlx, mlx->win);
	map_base_print(mlx);
	mlx_put_image_to_window(mlx->mlx, mlx->win, \
							mlx->player, mlx->p_x, mlx->p_y);
	printf("Number of steps: %d\n", mlx->p_steps);
	return (0);
}
