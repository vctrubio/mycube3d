#include "../include/header.h"

void	init_play_pov(void)
{
	t_game	*game;

	game = _game();
	game->dir_x = -1;
	game->dir_y = 0.0;
	game->plane_x = 0.0;
	game->plane_y = 0.66;
}