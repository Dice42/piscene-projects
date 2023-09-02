/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:17:12 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/15 18:51:02 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr_base(int nbr, char *base, int bsize)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= bsize)
	{
		ft_print_nbr_base(nbr / bsize, base, bsize);
	}
	ft_putchar(base[nbr % bsize]);
}

int	ft_base(char *base)

	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == base [i +1] || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bsize;

	bsize = 0;
	if (ft_base(base) == 1)
	{
		while (base[bsize] != '\0')
		{
			bsize++;
		}
		ft_print_nbr_base(nbr, base, bsize);
	}
}
