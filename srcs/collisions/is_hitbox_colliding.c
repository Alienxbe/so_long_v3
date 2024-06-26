/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_hitbox_colliding.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:51:09 by marykman          #+#    #+#             */
/*   Updated: 2024/04/07 17:21:47 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collisions.h"

int	is_hitbox_colliding(const t_map *map, t_ftype f, t_fpoint pos,
	t_area hitbox)
{
	t_fpoint	points[4];
	int			i;
	int			collision;

	points[0] = (t_fpoint){pos.x + hitbox.p1.x + 1,
		pos.y + hitbox.p1.y + 1};
	points[1] = (t_fpoint){pos.x + hitbox.p2.x - 1,
		pos.y + hitbox.p1.y + 1};
	points[2] = (t_fpoint){pos.x + hitbox.p2.x - 1,
		pos.y + hitbox.p2.y - 1};
	points[3] = (t_fpoint){pos.x + hitbox.p1.x + 1,
		pos.y + hitbox.p2.y - 1};
	collision = 0;
	i = -1;
	while (++i < 4)
		if (is_type(map, f, points[i]))
			collision |= (1 << i);
	return (collision);
}
