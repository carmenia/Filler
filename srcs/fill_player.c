/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:09:34 by vduong            #+#    #+#             */
/*   Updated: 2018/08/20 14:33:47 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	fill_player(t_player *player, char *firstline)
{
	int i;

	while (*firstline != 'p')
		firstline++;
	firstline++;
	player->number = *firstline - '0';
	player->symbol = player->number == 1 ? 'O' : 'X';
	while (*firstline != '[')
		firstline++;
	player->name = ft_strnew(ft_strlen(firstline));
	i = 0;
	while (firstline[i] != ']')
	{
		player->name[i] = firstline[i];
		i++;
	}
}
