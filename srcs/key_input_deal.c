/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input_deal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 23:54:40 by eryoo             #+#    #+#             */
/*   Updated: 2021/10/29 23:54:44 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	a_input(t_mlx *mlx)
{
	mlx->p_x -= 32;
	mlx->p_steps++;
	if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == '1')
	{
		mlx->p_x += 32;
		mlx->p_steps--;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'C')
	{
		mlx->map[mlx->p_y / 32][mlx->p_x / 32] = '0';
		mlx->new_c_flag++;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'E')
	{
		a_input_exit(mlx);
	}
}

void	d_input(t_mlx *mlx)
{
	mlx->p_x += 32;
	mlx->p_steps++;
	if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == '1')
	{
		mlx->p_x -= 32;
		mlx->p_steps--;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'C')
	{
		mlx->map[mlx->p_y / 32][mlx->p_x / 32] = '0';
		mlx->new_c_flag++;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'E')
	{
		d_input_exit(mlx);
	}
}

void	w_input(t_mlx *mlx)
{
	mlx->p_y -= 32;
	mlx->p_steps++;
	if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == '1')
	{
		mlx->p_y += 32;
		mlx->p_steps--;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'C')
	{
		mlx->map[mlx->p_y / 32][mlx->p_x / 32] = '0';
		mlx->new_c_flag++;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'E')
	{
		w_input_exit(mlx);
	}
}

void	s_input(t_mlx *mlx)
{
	mlx->p_y += 32;
	mlx->p_steps++;
	if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == '1')
	{
		mlx->p_y -= 32;
		mlx->p_steps--;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'C')
	{
		mlx->map[mlx->p_y / 32][mlx->p_x / 32] = '0';
		mlx->new_c_flag++;
	}
	else if (mlx->map[mlx->p_y / 32][mlx->p_x / 32] == 'E')
	{
		s_input_exit(mlx);
	}
}
