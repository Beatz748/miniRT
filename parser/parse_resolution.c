/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_resolution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhleena <jhleena@student.42.f>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:21:23 by jhleena           #+#    #+#             */
/*   Updated: 2021/05/06 16:31:14 by jhleena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	correct_input(char *str)
{
	if (*str <= '9' && *str >= '0')
		return (1);
	return (0);
}

int	num_length(int num)
{
	int	length;

	length = 0;
	if (num == 0)
		length++;
	while (num > 0)
	{
		length++;
		num = num / 10;
	}
	return (length);
}

t_scene	parse_resolution(t_scene scene, char *str)
{
	if (scene.resolution.existance == EXISTS)
		return (fill_scene_null(scene));
	str++;
	str = ft_is_space(str);
	if (!correct_input(str))
		return (fill_scene_null(scene));
	scene.resolution.height = ft_atoi(str);
	str += num_length(scene.resolution.height);
	str = ft_is_space(str);
	if (!correct_input(str))
		return (fill_scene_null(scene));
	scene.resolution.width = ft_atoi(str);
	str += num_length(scene.resolution.width);
	str = ft_is_space(str);
	if (*str != '\0')
		return (fill_scene_null(scene));
	scene.resolution.existance = EXISTS;
	scene.existance = EXISTS;
	return (scene);
}