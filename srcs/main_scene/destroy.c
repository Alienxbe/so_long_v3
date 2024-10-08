/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:18:20 by marykman          #+#    #+#             */
/*   Updated: 2024/08/22 16:28:07 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_sfe.h"
#include "sc_main.h"
#include "sfe_image.h"
#include "utils.h"

static void	free_assets(t_sc_main *sc)
{
	size_t	i;

	i = -1;
	while (sc->game->assets[++i].img)
		sfe_image_destroy(sc->sfe->mlx_ptr, &sc->game->assets[i]);
	free(sc->game->assets);
}

static void	free_alphabet(t_sc_main *sc)
{
	size_t	i;

	i = -1;
	while (sc->game->alphabet[++i].img)
		sfe_image_destroy(sc->sfe->mlx_ptr, &sc->game->alphabet[i]);
	free(sc->game->alphabet);
}

int	sc_main_destroy(t_sc_main *sc)
{
	if (sc->game->assets)
		free_assets(sc);
	if (sc->game->alphabet)
		free_alphabet(sc);
	if (sc->game->map.tab)
		free_tab(sc->game->map.tab, sc->game->map.size.y);
	ft_dlstclear(&sc->game->map.strawberries, &free);
	ft_dlstclear(&sc->game->map.secret_walls, &free);
	ft_dlstclear(&sc->game->strawberries, &free);
	ft_dlstclear(&sc->game->secret_walls, &free);
	return (0);
}
