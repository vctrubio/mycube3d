#ifndef HEADER_H
# define	HEADER_H

# include "../lmlx/mlx.h"
# include "keys.h"

# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

# define HEIGHT 200
# define WIDTH 400

# define SDHEIGHT 5
# define SDWIDTH 5
# define BUFFER_SIZE 1

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_vector
{
	int	x;
	int	y;
}				t_vector;

typedef struct	s_map
{
	char	**map;
	int		max_y;
	int		max_x;
}				t_map;

typedef struct	s_sprite
{
	// int		y;
	// int		x;
	int		pos_y;
	int		pos_x;
	int		width;
	int		height;
	void	*img;
}				t_sprite;

typedef struct	s_window
{
	void	*mlx;
	void	*window;
}				t_window;

typedef struct	s_img
{
	t_window	*window;
	void		*img;
	char		*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
}				t_img;

typedef struct	s_game
{
	t_window	*w;
	t_map		*map;
	t_sprite	*player;
}				t_game;
//static
t_map	*_map(void);

//map
void	print_map(t_map *map);
t_map	*rtn_map(void);

//keys
int		ft_key_hook(int keycode, t_window *w);
void	key_listener(void *w);

//calloc
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t size);

//utilList
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);

//utilStr
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//utilGNL
int	get_next_line(int fd, char **line);

#endif