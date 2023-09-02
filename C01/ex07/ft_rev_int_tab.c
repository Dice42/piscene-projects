/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:39:20 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/13 00:52:23 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int  
{
	int	buf;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		buf = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = buf;
		i++;
	}
}
