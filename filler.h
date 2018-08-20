/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:10:36 by vduong            #+#    #+#             */
/*   Updated: 2018/08/20 12:16:49 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

typedef	struct	 s_piece
{
	int		height;
	int		witdh;
	char	**content;
	char	symbol;
}				t_piece;

typedef	struct	s_map
{
	int		height;
	int		width;
	char	**content;
	char	symbol;
}				t_map;

#endif
