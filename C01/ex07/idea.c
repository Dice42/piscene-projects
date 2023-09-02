/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idea.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 00:57:19 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/10 01:12:57 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
    int tab_rev[size];
    int i = 0;

    while (i < size)
    {
        tab_rev[i] = tab[size - 1 - i];
        i++;
    }

    i = 0;
    while (i < size)
    {
        tab[i] = tab_rev[i];
        i++;
    }
}


int		main(void)
{
	int tab[20];
	int i;
	int size;

	size = 10;
	i = 0;
	while (i < size)
	{
		tab[i] = i;
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
}
