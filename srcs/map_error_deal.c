/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_error_deal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryoo <eryoo@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:55:40 by eryoo             #+#    #+#             */
/*   Updated: 2021/10/31 19:55:43 by eryoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_inside_error(t_game *game)
{
	if (game->e_flag == 0 || game->c_flag == 0 || game->p_flag != 1)
	{
		printf("\nERROR: Please insert at least 1 player/item/exit!\n");
		exit(1);
		return (1);
	}
	map_check_zero(game);
	return (0);
}

int	map_check_zero(t_game *game)
{
	int	row;
	int	col;

	game->map_flag = 0;
	row = 0;
	while (row < game->row)
	{
		col = 0;
		while (col < game->col)
		{	
			if (game->map[row][col] == '0' || game->map[row][col] == '1' || \
			game->map[row][col] == 'P' || game->map[row][col] == 'C' || \
			game->map[row][col] == 'E')
				game->map_flag++;
			else
			{
				printf ("The map must only contain 0 as tile setting :) \n");
				exit(1);
				return (1);
			}
			col++;
		}
		row++;
	}
	return (0);
}

int	check_ber(t_game *game, char *ber)
{
	int	counter;
	int	length;

	length = ft_strlen(ber);
	counter = 0;
	while (game->map_file[counter + 1])
		counter++;
	while (counter >= 0 && game->map_file[counter] != '.')
		counter--;
	if (counter >= 0 && !ft_strncmp(game->map_file + counter + 1, ber, length))
		return (1);
	return (0);
}

int	error_reading(void)
{
	printf("\nIt seems like there's a error in the map reading :/\n");
	exit(1);
	return (1);
}
