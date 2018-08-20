/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:10:36 by vduong            #+#    #+#             */
/*   Updated: 2018/08/20 12:58:01 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

#include	"../libft/libft.h"

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
	char	number;
	char	*name;
	char	symbol;
}				t_player;

int			fill_map(t_map *map);
int			fill_piece(t_piece *piece);
int			fill_player(t_player *player);
int			free_map(t_map *map);
int			free_piece(t_piece *piece);

#endif
