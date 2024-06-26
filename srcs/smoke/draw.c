/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:45:20 by marykman          #+#    #+#             */
/*   Updated: 2024/04/11 21:02:06 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_image.h"
#include "smoke.h"

static void	draw(t_smoke *smoke)
{
	sfe_image_mod_cpy(
		&smoke->assets[0xe0 + frame / 10],
		
		);
}

void	smoke_draw(t_game *game, t_img *img)
{
	// Pour chaque smoke draw a la position
	ft_dlstiter(game->smokes, draw);
}
