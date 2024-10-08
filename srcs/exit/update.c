/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 01:42:11 by marykman          #+#    #+#             */
/*   Updated: 2024/08/22 18:36:46 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "exit.h"

static void	update_animation(t_game *game)
{
	static float	frame;

	game->exit.frame = (int)frame % 3;
	frame += 0.1;
	if (frame < 0)
		frame = 0;
}

static t_bool	on_exit(t_game *game)
{
	t_area		p_hitbox;
	t_area		e_hitbox;

	p_hitbox.p1 = ft_fpoint_to_point(game->player.pos);
	p_hitbox.p2 = add_point(p_hitbox.p1, game->player.hitbox.p2);
	e_hitbox.p1 = game->exit.pos;
	e_hitbox.p2 = add_point(e_hitbox.p1, game->exit.hitbox.p2);
	return (area_collision(p_hitbox, e_hitbox));
}

void	exit_update(t_game *game)
{
	if (on_exit(game)
		&& !game->strawberries && !game->secret_walls)
	{
		*game->running = false;
		ft_printf("You win ! Score: %d\n", game->player.steps);
	}
	update_animation(game);
}
