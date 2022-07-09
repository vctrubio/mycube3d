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

	game = malloc(sizeof(t_game));
	return (game);
}


int main()
{
	t_game	*game;

	game = rtn_game();
	game->w = rtn_window();
	game->map =  rtn_map();
	print_map(game->map);
	game->w->mlx = mlx_init();
	game->w->window = mlx_new_window(game->w->mlx, game->map->max_x * 64, game->map->max_y * 64, "Helloword");

	init_parse(game); //on here

	key_listener(game->w->window);
	mlx_loop(game->w->mlx);
	printf("hello_end_world\n");
}