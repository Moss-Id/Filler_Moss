/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midoubih <midoubih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 12:26:35 by midoubih          #+#    #+#             */
/*   Updated: 2014/01/24 17:35:24 by midoubih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int					get_num_player()
{
	static int	num_p = -1;
	char		*buff;

	if (num_p == -1)
	{
		while (ft_gnl(0, &buff) && )
	}
}

int					main()
{
	int			num_player;
	t_board		*board;
	t_piece		*piece;

	num_player = get_num_player();
	board = get_board();
	piece = get_piece();
	return (0);
}
