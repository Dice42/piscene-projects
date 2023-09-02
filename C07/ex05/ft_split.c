/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:41:35 by mohammoh          #+#    #+#             */
/*   Updated: 2023/05/17 20:33:39 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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
int count(char *s, char *sep)
{
    int i
    int *array
    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (s[i + j] == sep[j])
            j++;
        if (sep[j] != '\0')
            k++;
        i++;
    }
}



char **ft_split(char *str, char *charset)
{
    int i;
    int j;
    int k;
    char    **array;
    int strs_count;

    i = 0;
    k = 0;
    while ( str[i] != '\0')
    {
         j = 0;
        while (str[i + j] == charset[j])
        {
            j++;
        }
        if (charset[j] == '\0')
            k++;
            // pass i;
            // pass i + j;
        i++;
    }
    str_count = k + 2;
    printf("%d", k);
    return 0;
}


int main(void)
{
    char string[] = "Hello, (World,  !What";
    char *sep = ", ";
    ft_split(string, sep);
    return (0);
}