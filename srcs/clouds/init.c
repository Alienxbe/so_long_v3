/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:16:50 by marykman          #+#    #+#             */
/*   Updated: 2024/08/22 16:43:04 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "clouds.h"

void	clouds_init(t_game *game)
{
	size_t	i;

	i = -1;
	while (++i < CLOUD_COUNT)
		game->clouds[i] = clouds_new_random(
				ft_randint(-300, game->map.pixel_size.y),
				game->map.pixel_size.y);
}
