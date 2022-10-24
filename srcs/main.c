/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:12:49 by jbarette          #+#    #+#             */
/*   Updated: 2022/10/24 14:06:10 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char **argv)
{
	t_params	*params;

	if (argc != 2)
		ft_exit("Vous devez indiquer le chemin de la MAP.");
	params = init_params();
	parsing(params, argv[1]);
	if (start_game(params))
		ft_exit("Une erreur est survenu lors du lancement de la partie.");
	free_structure(params);
	return (0);
}