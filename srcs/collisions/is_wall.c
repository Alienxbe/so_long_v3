/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_wall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:51:30 by marykman          #+#    #+#             */
/*   Updated: 2024/08/21 19:50:02 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collisions.h"

t_bool	is_wall_type(int block)
{
	return (block >= WALL_INDEX_MIN && block <= WALL_INDEX_MAX);
}

t_bool	is_wall(const t_map *map, t_fpoint pos)
{
	return (is_type(map, &is_wall_type, pos));
}
