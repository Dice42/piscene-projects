/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:48:29 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/09 00:15:08 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_hex(char c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(base[c / 16]);
		ft_putchar(base[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(base[(int)c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			convert_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
