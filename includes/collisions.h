/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collisions.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:33:37 by marykman          #+#    #+#             */
/*   Updated: 2024/01/03 19:15:24 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLISIONS_H
# define COLLISIONS_H

# include "so_long.h"

typedef t_bool	(*t_ftype)(int);

t_bool	is_type(const t_map *map, t_ftype f, t_fpoint pos);
t_bool	is_wall(const t_map *map, t_fpoint pos);
t_bool	is_hitbox_colliding(const t_map *map, t_ftype f, t_fpoint pos,
	t_area hitbox);

#endif
