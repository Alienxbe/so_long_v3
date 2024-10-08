/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:23:48 by marykman          #+#    #+#             */
/*   Updated: 2024/08/22 17:57:46 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfe_pixel.h"
#include "strawberries.h"

void	strawberry_erase(t_game *game, t_img *img)
{
	t_dlist		*lst;
	t_fpoint	pos;

	lst = game->strawberries;
	while (lst)
	{
		pos = *(t_fpoint *)lst->content;
		sfe_pixel_fill(img,
			(t_area){{pos.x, pos.y},
		{pos.x + SPRITE_SIZE, pos.y + SPRITE_SIZE}},
			BACKGROUND_COL);
		lst = lst->next;
	}
}
