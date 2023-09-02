/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:05:19 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/23 11:06:00 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int     n;
    int     length;
    char    *str;

    length = 0;
    n = nbr;
    if (n <= 0)
    {
        length++;
        n *= -1;
    }
    while (n > 0)
    {
        n /= 10;
        length++;
    }
    str = (char *)malloc(sizeof(char) * (length + 1));
    if (!(str))
        return (NULL);
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    str[length] = '\0';
    length--;
    while (nbr > 0)
    {
        str[length--] = nbr % 10 + 48;
        nbr /= 10;
    }
    return (str);
}