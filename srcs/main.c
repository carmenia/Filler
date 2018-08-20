/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:22:25 by vduong            #+#    #+#             */
/*   Updated: 2018/08/20 14:36:29 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/filler.h"

int	main(int argc, char **argv)
{
	t_player			player;
	t_map				map;
	t_piece				piece;
	char				*firstline;

	get_next_line(0, &firstline);
	if (strstr(firstline, "$$$"))
		fill_player(&player, firstline);
	else
	{
		fill_map(&map, firstline);
		fill_piece(&piece);
	}
	return (0);
}
