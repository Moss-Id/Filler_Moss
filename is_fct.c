#include "filler.h"

int				is_shape(char c)
{
	return (c == '*');
}

int				is_dot(char c)
{
	return (c == '.');
}

int				is_piece_pl1(char c)
{
	return (c == 'o' || c == 'O');
}

int				is_piece_pl2(char c)
{
	return (c == 'x' || c == 'X');
}

int				is_piece(char c)
{
	return (is_piece_pl1(c) || is_piece_pl2(c));
}