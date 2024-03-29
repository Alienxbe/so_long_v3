/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sc_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:33:26 by marykman          #+#    #+#             */
/*   Updated: 2024/01/07 14:30:36 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SC_MAIN_H
# define SC_MAIN_H

# include "t_scene.h"
# include "so_long.h"

typedef struct s_sc_main
{
	t_game		*game;
	t_bool		running;
	t_scene		scene;		// Where to draw
	t_sfe		*sfe;
}	t_sc_main;

int		sc_main_init(t_sc_main *sc);
int		sc_main_update(t_sc_main *sc);
int		sc_main_destroy(t_sc_main *sc);

void	main_update(t_sc_main *sc);
void	main_draw(t_sc_main *sc);
void	main_erase(t_sc_main *sc);

void	events_init(t_sfe *sfe, t_sc_main *sc);

#endif