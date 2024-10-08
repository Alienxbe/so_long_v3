/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:27:42 by marykman          #+#    #+#             */
/*   Updated: 2024/08/23 15:53:51 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stddef.h>
# include "ft_dlist.h"
# include "ft_point.h"
# include "ft_area.h"
# include "ft_list.h"
# include "events.h"

# ifdef BONUS
#  define PARSING_MODE 2
# else
#  define PARSING_MODE 1
# endif

# define WIN_NAME		"So long but it's actually too long"
# define SPRITE_SIZE	32
# define BACKGROUND_COL	0x0
# define MAPFILE_SUFFIX	".ber"

# define CLOUD_COUNT		16
# define SNOWFLAKE_COUNT	24
# define HAIR_COLOR_DASH_2	0x00FF00
# define HAIR_COLOR_DASH_1	0xFF004D
# define HAIR_COLOR_DASH_0	0x29ADFF

# define WALL_INDEX_MIN	1
# define WALL_INDEX_MAX	0x25

# define F_SPRITE_SHEET		"assets/CelestePico8.xpm"
# define F_ALPHABET_SHEET	"assets/alphabet.xpm"

typedef struct s_map
{
	int		**tab;
	t_point	player_pos;
	t_point	exit_pos;
	t_dlist	*strawberries;
	t_dlist	*secret_walls;
	t_point	size;
	t_point	pixel_size;
}	t_map;

typedef struct s_player
{
	t_fpoint	pos;
	t_fpoint	spd;
	t_area		hitbox;
	t_bool		on_ground;
	t_bool		on_wall;
	int			frame;
	int			direction;
	t_bool		p_jump;
	t_bool		jump;
	int			jbuffer;
	int			grace;
	t_bool		p_dash;
	t_bool		dash;
	int			djump;
	int			max_djump;
	int			dash_time;
	t_fpoint	dash_target;
	int			steps;
	t_point		input;
	t_img		*assets;
}	t_player;

typedef struct s_exit
{
	t_point	pos;
	t_area	hitbox;
	int		frame;
}	t_exit;

typedef struct s_cloud
{
	t_point	pos;
	size_t	speed;
	t_point	size;
}	t_cloud;

typedef struct s_snowflake
{
	t_fpoint	pos;
	size_t		size;
	size_t		speed;
	float		frq;
	size_t		ampl;
}	t_snowflake;

typedef struct s_game
{
	t_map		map;
	t_player	player;
	t_exit		exit;
	t_cloud		clouds[CLOUD_COUNT];
	t_snowflake	snowflakes[SNOWFLAKE_COUNT];
	t_dlist		*strawberries;
	t_dlist		*secret_walls;
	int			coin_count;
	t_img		*assets;
	t_img		*alphabet;
	t_bool		active_keys[GAME_KEY_LEN];
	t_bool		*running;
}	t_game;

#endif
