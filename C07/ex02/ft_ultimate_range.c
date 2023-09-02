/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:15:36 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/20 14:08:07 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	index;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (size));
	if (tab == NULL)
		return (-1);
	index = 0;
	while (min < max)
	{
		tab[index] = min;
		index++;
		min++;
	}
	*range = tab;
	return (size);
}
