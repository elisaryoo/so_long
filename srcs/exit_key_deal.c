/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_key_deal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 23:52:48 by eryoo             #+#    #+#             */
/*   Updated: 2021/10/29 23:52:59 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	a_input_exit(t_mlx *mlx)
{
	if (mlx->new_c_flag == mlx->old_c_flag)
	{
		free_mlx(mlx);
		printf("\n 🍬 Congratulations you finished the game!! 🍫\n");
		exit(1);
	}
	else
	{
		mlx->p_x += 32;
		mlx->p_steps--;
	}
}

void	d_input_exit(t_mlx *mlx)
{
	if (mlx->new_c_flag == mlx->old_c_flag)
	{
		free_mlx(mlx);
		printf("\n 🍭 Congratulations you finished the game!! 🍭\n");
		exit(1);
	}
	else
	{
		mlx->p_x -= 32;
		mlx->p_steps--;
	}
}

void	w_input_exit(t_mlx *mlx)
{
	if (mlx->new_c_flag == mlx->old_c_flag)
	{
		free_mlx(mlx);
		printf("\n 👻 Congratulations you finished the game!! 👻\n");
		exit(1);
	}
	else
	{
		mlx->p_y += 32;
		mlx->p_steps--;
	}
}

void	s_input_exit(t_mlx *mlx)
{
	if (mlx->new_c_flag == mlx->old_c_flag)
	{
		free_mlx(mlx);
		printf("\n 🎃 Congratulations you finished the game!! 🎃\n");
		exit(1);
	}
	else
	{
		mlx->p_y -= 32;
		mlx->p_steps--;
	}
}
