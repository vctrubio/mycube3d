#include "../include/header.h"

static int	ft_key_(int keycode)
{
	if (keycode == K_Q)
	{
		printf("Key01\n");
		exit(1);
	}
	return (0);
}

int		ft_key_hook(int keycode, t_window *w)
{
	if (keycode == 15)
	{
		printf("Key01\n");
		exit(1);
	}
	if (keycode == 2)
		printf("Key02\n");
	if (keycode == 4)
		printf("Key02\n");

	return (0);
}

void	key_listener(void *w)
{
	printf("init_key_listnener\n");
	mlx_key_hook(w, ft_key_, w);
}
