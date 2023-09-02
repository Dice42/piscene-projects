/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:37:03 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/06 21:58:31 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 00;
	j = 01;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			write(1, " ", 1);
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if ( i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
int main ()
{
	ft_print_comb2();
}