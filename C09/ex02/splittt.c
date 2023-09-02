/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splittt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:27:29 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/24 02:45:25 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	int				count;

	i = 0;
	j = 0;
	count = 0;
	if (*to_find == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					count++;
			}
			j = 0;
		}
		i++;
	}
	if (str[i])
		count++;
	return (count);
}

int	ft_strstr2(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	int				count;

	i = 0;
	j = 0;
	count = 0;
	if (*to_find == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (i);
			}
			j = 0;
		}
		i++;
	}
	return (ft_strlen(str));
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (0);
	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

char **ft_split(char *str, char *charset)
{
	int	i[8];// i[1] amt of strings to create, i[0] str iterator
	char	**strz;

	i[7] = 0;
	if (!str)
		return (NULL);
	if (!charset)
	{
		strz = malloc(sizeof(char *) * 2);
		strz[0] = ft_strdup(str);
		strz[1] = NULL;
		return (strz);
	}
	while (i[7] < 8)
	{
		if (i[7] == 7)
			break ;
		i[i[7]++] = 0;
	}
	i[5] = ft_strlen(charset);
	if (!ft_strncmp(str, charset, i[5]))
	{
		str += i[5];
		i[1] = 1;
	}
	if (str)
		i[1] = 1;
	if (!str)
		return (NULL);
	i[1] += ft_strstr(str, charset);// i[1] == amt of strings to be created!
	strz = malloc(sizeof(char *) * i[1] + 1);
	while (i[2] < i[1])// i[2] is the iterator to set the individual strings!
	{
		i[4] = 0;
		i[3] = ft_strstr2(str, charset);//i[3] is the end of the string to be created
		strz[i[2]] = malloc(sizeof(char) * i[3] + 1);
		while (i[4] < i[3])
		{
			strz[i[2]][i[4]] = str[i[4]];
			i[4]++;
		}
		strz[i[2]][i[4]] = '\0';
		str += i[4];
		if (!ft_strncmp(str, charset, i[5]))
			str += i[5];
		i[2]++;
	}
	strz[i[2]] = NULL;
	return (strz);
}

int main()
{
	char *sep = " ?  ? ";
	// char *str = " ?  ? ";
	char *str = "   world   ?  ? hello    d ?  ?    how are you   ?  ?            ?  ?    ";
	// char *str = " ?  ?    world   ?  ? hello    d ?  ?    how are you   ?  ?            ?  ?    ";
	// char *str = "   world   ?  ? hello    d  ?  ?    how are you   ?  ?            ?  ?    ";
	// ft_split(str, sep);
	char **result = ft_split(str, sep);
	// printf("r %p\n", result);
	// printf("rp %p\n", *result);
	if (result)
		for (int k = 0; result[k]; k++)
			printf("result[%d] -> %s\n", k, result[k]);
	return 0;
}
