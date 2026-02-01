/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:51:45 by parattan          #+#    #+#             */
/*   Updated: 2026/02/01 16:56:23 by parattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DRAW_H
# define DRAW_H

void	draw_inside(char *grid, int grid_size);
void	draw_corner(char *grid, int grid_size);
void	draw_outside(char *grid, int grid_size, char *input);

#endif
