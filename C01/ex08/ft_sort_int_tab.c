/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:24:02 by mohammoh          #+#    #+#             */
/*   Updated: 2023/08/10 18:47:03 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = *b;
	*b = buf;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;

	index = 0;
	while (index < size && tab[index])
	{
		if (tab[index] > tab[index +1])
			ft_swap(&tab[index], &tab[index + 1]);
		index++;
	}
}

int main()
{
	int i = 0;
	int tab[]= {15 , 2, 30, 7};
	// ft_sort_int_tab(tab, 4);
	while (i < 4)
	{
		printf("%d\n", tab[i++]);
	}
}
