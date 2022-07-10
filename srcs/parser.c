#include "../include/header.h"



t_img	*put_img(t_window *w, char *path, int y, int x)
{
	t_img	*img;

	img = malloc(sizeof(t_img));
	img->window = w;
	img->height = 20;
	img->width = 20;
	img->img = mlx_xpm_file_to_image(w->mlx, path, &img->width, &img->height);
	mlx_put_image_to_window(w->mlx, w->window, img->img, x, y);
	return (img);
}

void	select_image(t_game *game, int y, int x)
{
	// if (game->map->map[y][x] == '1')
	t_sprite	*player;

	player = malloc(sizeof(t_sprite));
	player->pos_x = x;
	player->pos_y = y;
	player->height = 20;
	player->width = 20;
	player->img = put_img(game->w, "images/wall.XPM", y, x);
}

void	init_parse(t_game *game)
{
	printf("hi parses\n");
	//create
	int x = 0;
	int	y = 0;
	t_map	*map;

	map = game->map;
	printf("max_y %d max_x %d \n", map->max_y, map->max_x);
	select_image(game, 24, 64);
	// while (y < map->max_y)
	// {
	// 	x = 0;
	// 	while (x < map->max_x)
	// 	{
	// 		select_image(game, y, x);
	// 		x++;
	// 	}
	// 	y++;
	// }
}