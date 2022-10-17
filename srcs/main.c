/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:12:49 by jbarette          #+#    #+#             */
/*   Updated: 2022/10/17 16:43:33 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int argc, char **argv)
{
	t_texture	*textures;

	if (argc != 2)
	{
		printf("Error\nDeux arguments sont nécessaires.\n");
		exit (0);
	}
	init_texture(textures);
	parsing(argv[1]);
	printf("NO %s\nSO %s\nWE %s\nEA %s\n", textures->north, textures->south, textures->west, textures->east);
	// On lance le jeu ici
	return (0);
}