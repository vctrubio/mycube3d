#include "../include/header.h"

t_window	*rtn_window(void)
{
	t_window	*window;

	window = malloc(sizeof(t_window));
	window->mlx = mlx_init();
	window->window = NULL;
	return (window);
}

t_game	*rtn_game(void)
{
	t_game	*game;

	game = _game();
	return (game);
}



int main()
{
	t_game	*game;

	game = rtn_game();
	game->w = rtn_window();
	game->map =  rtn_map();
	game->w->mlx = mlx_init();

	printf("max_x max_y %d %d\n", game->map->max_x, game->map->max_y);
	print_map(game->map);

	init_parse(game); //on here


	game->w->window = mlx_new_window(game->w->mlx, WWIDTH, WHEIGHT, "Helloword");
	key_listener(game->w->window);
	mlx_loop(game->w->mlx);
	printf("hello_end_world\n");
}