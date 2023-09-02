/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:09:31 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/11 02:48:47 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (j < argc)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		i = 0;
		j++;
		ft_putchar('\n');
	}
}
