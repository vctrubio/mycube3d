#include "../include/header.h"

void	move_play(int keycode)
{
	t_game	*game;

	game = _game();
	if (keycode == K_D)
	{
		printf("move right\n");
		
	}
}

static int	ft_key_(int keycode)
{
	if (keycode == K_Q)
	{
		printf("Key01\n");
		exit(1);
	}
	if (keycode == K_D)
	{
		move_play(K_D);
		printf("Key02\n");
	}
	return (0);
}


void	key_listener(void *w)
{
	printf("init_key_listnener\n");
	mlx_key_hook(w, ft_key_, w);
}
