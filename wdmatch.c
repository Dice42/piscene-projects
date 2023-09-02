/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:31:18 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/23 09:38:32 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_dublicate(char *str, char c, int n)
{
	int i = 0;
	while (i < n)
	{
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main (int ac, char **av)
{
	int	i;

	i = 0;
	while (av[1][i] != '\0')
	{
		if(!is_dublicate(av[1], av[1][i],i) && is_dublicate(av[2], av[1][i], ft_strlen(av[2])))
		{
			ft_putchar(av[1][i]);
		}
		i++;
	}
	ft_putchar('\n');
	return 0;
}