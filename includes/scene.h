/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhleena <jhleena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:48:05 by jhleena           #+#    #+#             */
/*   Updated: 2021/04/08 17:10:13 by jhleena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H

# include "camera.h"
# include "object.h"
# include "light.h"
# include "../libft/libft.h"

typedef struct	s_scene
{
	t_list		*objects;
	t_list		*cameras;
	t_list		*light;
	t_ambient	ambient;
}				t_scene;

t_ray			get_ray(int x, int y, t_camera camera, t_wind winndow);
t_color			ray_trace(t_ray ray, t_scene scene);

#endif
