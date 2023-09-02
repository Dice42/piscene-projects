/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:02:29 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/21 17:08:26 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (0);
}

char    ft_strcat(char *dest, char *str)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
        i++;
    j = 0;
    while (str[j] != '\0')
    {
        dest[i + j] = str[j];
        j++;
    }
    dest[j+i] = '\0';
    return (*dest);
}
int ft_length(int size, char **strs, char *sep)
{
    int i;
    int total;
    i = 0;
    total = 0;
    while (i < size)
    {
        total = total + ft_strlen(strs[i]);
        if (i < size - 1)
        {
            total += ft_strlen(sep);
        }
        i++;
    }
    return (total);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    char *new;

    if(size == 0)
    {
        new = (char *)malloc(sizeof(char) * (1));
        return (new);
    }
    i = 0;
    new = (char *)malloc(sizeof(char) * (ft_length(size, strs, sep) + 1));
    if(!new)
        return 0;
    while (i < size)
    {
        ft_strcat(new, strs[i]);
        if (i < size - 1)
        {
            ft_strcat(new, sep);
        }
        i++;
    }
    return (new);
}

#include <stdio.h>
int main ()
{
	char *str[]={"hello", "world", "from", "42"};
	char sep[]= ", ";
	int size = 0;

	printf("%s", ft_strjoin(size, str, sep));
}
