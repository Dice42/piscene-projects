/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:50:44 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/20 14:14:22 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*create_str(int size, char **strs, char *sep)
{
	int		tot_length;
	int		i;
	char	*str;

	i = 0;
	while (i < size)
	{
		tot_length = tot_length + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size -1)
	{
		tot_length += ft_strlen(sep);
		i++;
	}
	if (size == 0)
		tot_length = 0;
	str = (char *)malloc(sizeof(char) * (tot_length + 1));
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		index;
	char	*new;

	i = 0;
	index = 0;
	new = create_str(size, strs, sep);

	while (i < size)
	{
		ft_strcpy(&new[index], strs[i]);
		index = index + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(&new[index], sep);
			index += ft_strlen(sep);
		}
		i++;
	}
	new[index + 1] = '\0';
	return (new);
}
// #include <stdio.h>
// int main ()
// {
// 	char *str[]={"hello", "world", "42"};
// 	char sep[]= ", ";
// 	int size = 3;

// 	printf("%s\n", ft_strjoin(size, str, sep));
// }
