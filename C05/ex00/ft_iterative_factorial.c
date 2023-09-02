/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:13:14 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/10 22:22:43 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fa;

	i = 1;
	fa = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < fa)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(4));
}