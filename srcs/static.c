#include "../include/header.h"

t_game	*_game(void)
{
	static t_game game;

	return (&game);
}