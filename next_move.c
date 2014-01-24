#include "filler.h"

void			switch_shape(t_board *board, t_piece *piece, int num_p)
{
	int		x;
	int		y;

	y = 0;
	while (y < piece->length)
	{
		x = 0;
		while (x < piece->width)
		{
			if (is_shape(piece->field[y][x]))
				piece->field[y][x] == board->char_piece[num_p - 1];
			x++;
		}
		y++;
	}
}

int				is_good_move(t_board *board, t_piece *piece, t_coord move)
{
	int		x;
	int		y;
	int		tmp;
	char	**ptr_pce;
	char	**ptr_brd;

	ptr_pce = piece->field;
	ptr_brd = board->field;
	tmp = 0;
	y = 0;
	while (y < piece->length && ptr_brd[move.y + y])
	{
		x = 0;
		while (x < piece->width && ptr_brd[move.y + y][move.x + x])
		{
			if (!(is_dot(ptr_pce[y][x]))
			{
				if (ft_strcmp(ptr_pce[y][x], ptr_brd[move.y + y][move.x + x]))
					tmp++;
			}
			if (tmp > 1)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

t_coord			find_next_move(t_board *board, t_piece *piece, int num_p)
{

	t_coord		next_move;

	switch_shape(piece, num_p);
	next_move.y = 0;
	while (next_move.y < (board->length - piece->length))
	{
		next_move.x = 0;
		while (next_move.x < (board->width - piece->width))
		{
			if (is_good_move(board, piece, next_move))
				return (next_move);
			next_move.x++;
		}
		next_move.y++;
	}
	return (next_move);
}