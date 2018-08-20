/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:22:25 by vduong            #+#    #+#             */
/*   Updated: 2018/08/20 12:59:32 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/filler.h"

int	main(int argc, char **argv)
{
	t_player			player;
	t_map				map;
	t_piece				piece;

	if (!fill_player(&player) && (fill_map(&map) && fill_piece(&piece)))
	{
	}

	return (0);
}
