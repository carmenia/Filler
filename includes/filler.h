/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:10:36 by vduong            #+#    #+#             */
/*   Updated: 2018/08/20 15:08:56 by carmenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

#include	"../libft/libft.h"
#include	"get_next_line.h"

typedef	struct	 s_piece
{
	int		height;
	int		witdh;
	char	**content;
}				t_piece;

typedef	struct	s_map
{
	int		height;
	int		width;
	char	**content;
}				t_map;

typedef	struct	s_player
{
	int		number;
	char	*name;
	char	symbol;
}				t_player;

void			fill_map(t_map *map, char *firstline);
void			fill_piece(t_piece *piece);
void			fill_player(t_player *player, char *firstline);
int			free_map(t_map *map);
int			free_piece(t_piece *piece);

#endif
