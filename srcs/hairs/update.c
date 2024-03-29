/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:40:18 by marykman          #+#    #+#             */
/*   Updated: 2024/01/18 17:49:56 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hairs.h"

void	hairs_update(t_game *game)
{
	size_t	i;

	i = 1;
	while (++i < HAIR_COUNT)
		game->hairs[i].pos = (t_fpoint){game->player.pos.x, game->player.pos.y};
}
