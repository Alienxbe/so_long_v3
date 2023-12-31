/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marykman <marykman@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:39:52 by marykman          #+#    #+#             */
/*   Updated: 2023/12/24 14:16:16 by marykman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "snowflakes.h"

void	snowflakes_init(t_game *game)
{
	size_t		i;

	i = -1;
	while (++i < SNOWFLAKE_COUNT)
		game->snowflakes[i] = random_snowflake(ft_randint(0, WIN_WIDTH));
}
