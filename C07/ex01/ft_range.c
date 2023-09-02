/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:41:52 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/20 12:38:07 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	len = max - min;
	if (min >= max)
		return (0);
	else
	{
		tab = (int *)malloc(sizeof(int) * (len + 1));
		i = 0;
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		tab[i] = '\0';
		return (tab);
	}
}
