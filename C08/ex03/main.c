/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:56:54 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/21 16:56:37 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
    printf("%d\n", point->x);
	printf("%d", point->y);
}

int main(void)
{
    t_point point;
    set_point(&point);
    return (0);
}