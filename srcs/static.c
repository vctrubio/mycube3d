#include "../include/header.h"

t_map	*_map(void)
{
	static t_map map;

	return (&map);
}