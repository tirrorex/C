/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/10 17:19:30 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 18:17:41 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H

# define FDF_H

# include <mlx.h>
# include <libft.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>

# define ABS(X)		(X > 0 ? X : -X)
# define TORAD(x) (M_PI * x) / 180
# define WIDTH		1080
# define HEIGHT		1080

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	struct s_img	*img;
	struct s_2d		*coord2d;
	int				zoom;
	int				hpos;
	int				vpos;
	int				proj;
}					t_env;

typedef struct		s_arg
{
	t_list			*list;
	char			**tab;
	int				xlen;
	int				ylen;
	int				fd;
	int				len;
}					t_arg;

typedef struct		s_3d
{
	float			x;
	float			y;
	float			z;
	int				xlen;
	int				ylen;
}					t_3d;

typedef struct		s_2d
{
	int				x;
	int				y;
	int				xbackup;
	int				zbackup;
	int				ybackup;
	int				xlen;
	int				ylen;
	int				up;
	int				down;
	int				left;
	int				right;
}					t_2d;

typedef struct		s_img
{
	void			*ptr;
	unsigned char	*data;
	int				endian;
	int				bits;
	int				size_line;
}					t_img;

typedef struct		s_line
{
	float			x;
	float			y;
	float			length;
	float			startx;
	float			starty;
}					t_line;

typedef struct		s_parser
{
	char			**tmp;
	int				i;
	int				j;
	int				len;
	struct s_list	*next;
	unsigned int	k;
}					t_parser;

typedef struct		s_split
{
	char			**tab;
	int				i;
	int				j;
	int				k;
}					t_split;

t_2d				*parser_map(t_list *lst);
t_2d				convert_into_2d(int x, int y, int z, int xlen);
void				trace_map(t_list *list);
void				draw(t_img *img, t_2d *map);
void				trace_line(t_img *img, t_2d *p0, t_2d *p1);
void				print_pixel(t_img *img, int x, int y);
void				regenerate_map(t_env *param);
void				init_menu(void *mlx_ptr, void *win_ptr);
t_2d				*coord2d_malloc(int len);

#endif
