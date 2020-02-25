/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:12:47 by thgermai          #+#    #+#             */
/*   Updated: 2019/09/18 23:15:21 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_h.h"

int		main(int ac, char **av)
{
	t_point		*point;
	t_case		**map;

	map = NULL;
	if (!(point = malloc(sizeof(t_point) * 1)))
	{
		ft_putstr_error("Error\n");
		return (0);
	}
	point->value = 0;
	if (ac == 1)
	{
		standard(point, map);
		return (0);
	}
	else
		file_name(av, point, map);
	free(point);
	return (0);
}
